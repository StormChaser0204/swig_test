#include <start_data_t.hpp>
#include <game_data_t.hpp>
#include <visual_config_t.hpp>
#include <json2pb.h>
#include <graph.hpp>
#include <gtest/gtest.h>

// This horrible business works around the fact that the MS compiler
// chokes on string literals that are "too long".
#ifdef _MSC_VER
#include <fstream>

std::string nations_json_string;
std::string map_json_string;
std::string oob_json_string;
std::string units_json_string;
std::string scenario_json_string;
std::string hex_map_config_json_string;

std::string file_slurp (const char* filename)
{
    std::string retval;
    std::ifstream ifs(filename);
    std::getline(ifs, retval, '\0');
    return retval;
}
#else
#include <test_data.hpp>
#endif

TEST(init_model_ops, test_init_nations)
{
    start_data::start_data_t start_data;
    start_data.init_nations(nations_json_string);
}

TEST(init_model_ops, test_init_units)
{
    start_data::start_data_t start_data;
    start_data.init_unit_defs(units_json_string);
}

TEST(init_model_ops, test_init_scenario)
{
    start_data::start_data_t start_data;

    auto get_map_str = [](std::string const &) { return map_json_string; };
    auto get_oob_str = [](std::string const &) { return oob_json_string; };

    start_data.init_unit_defs(units_json_string);
    start_data.init_nations(nations_json_string);
    start_data.init_scenario(scenario_json_string, get_map_str, get_oob_str);

    game_data_t game_data(start_data);
}

#if 0
TEST(init_model_ops, test_nations_bin_encoding)
{
    using namespace start_data;

    message::nations_t nations_msg;
    json2pb(nations_msg, nations_json_string, map_encoding_t::compact);
    nations_t from_string = from_protobuf(nations_msg);

    std::vector<unsigned char> encoded_bytes;
    to_bin(from_string, encoded_bytes);

    unsigned char* bytes = &encoded_bytes[0];
    unsigned char* const inital_bytes = bytes;
    nations_t from_encoding = nations_t_from_bin(bytes);

    EXPECT_EQ(bytes, inital_bytes + encoded_bytes.size());

    ASSERT_EQ(from_encoding.nations.size(), from_string.nations.size());
    auto from_encoding_it = from_encoding.nations.begin();
    for (const auto& string_nation_pair : from_string.nations) {
        const auto& encoding_nation_pair = *from_encoding_it++;

        EXPECT_EQ(encoding_nation_pair.first, string_nation_pair.first);
        const nation_t& nation_from_encoding = encoding_nation_pair.second;
        const nation_t& nation_from_string = string_nation_pair.second;
        EXPECT_EQ(nation_from_encoding.short_name, nation_from_string.short_name);

        // capital
        const capital_t& capital_from_encoding = nation_from_encoding.capital;
        const capital_t& capital_from_string = nation_from_string.capital;
        ASSERT_EQ(capital_from_encoding.hexes.size(), capital_from_string.hexes.size());
        for (std::size_t i = 0; i < capital_from_encoding.hexes.size(); ++i) {
            EXPECT_EQ(capital_from_encoding.hexes[i].coord, capital_from_string.hexes[i].coord);
            ASSERT_EQ(capital_from_encoding.hexes[i].zones.size(), capital_from_string.hexes[i].zones.size());
            for (std::size_t j = 0; j < capital_from_encoding.hexes[i].zones.size(); ++j) {
                EXPECT_EQ(capital_from_encoding.hexes[i].zones[j].name, capital_from_string.hexes[i].zones[j].name);
                ASSERT_EQ(capital_from_encoding.hexes[i].zones[j].features.size(), capital_from_string.hexes[i].zones[j].features.size());
                for (std::size_t k = 0; k < capital_from_encoding.hexes[i].zones[j].features.size(); ++k) {
                    EXPECT_EQ(capital_from_encoding.hexes[i].zones[j].features[k], capital_from_string.hexes[i].zones[j].features[k]);
                }
            }
        }

        EXPECT_EQ(nation_from_encoding.free_strategic_moves, nation_from_string.free_strategic_moves);
        EXPECT_EQ(nation_from_encoding.capital_star_points, nation_from_string.capital_star_points);

        // offmap_possesions
        EXPECT_EQ(nation_from_encoding.offmap_possesions.provinces, nation_from_string.offmap_possesions.provinces);
        EXPECT_EQ(nation_from_encoding.offmap_possesions.mins, nation_from_string.offmap_possesions.mins);
        EXPECT_EQ(nation_from_encoding.offmap_possesions.majs, nation_from_string.offmap_possesions.majs);
        EXPECT_EQ(nation_from_encoding.offmap_possesions.survey_ships, nation_from_string.offmap_possesions.survey_ships);
        EXPECT_EQ(nation_from_encoding.offmap_possesions.cannot_build_offmap_capital, nation_from_string.offmap_possesions.cannot_build_offmap_capital);
        EXPECT_EQ(nation_from_encoding.offmap_possesions.old_shipyard, nation_from_string.offmap_possesions.old_shipyard);

        EXPECT_EQ(nation_from_encoding.nation_id, nation_from_string.nation_id);
    }
}
#endif

TEST(visual_config_tests, validate_visual_config)
{
    start_data::start_data_t start_data;
    start_data.init_nations(nations_json_string);

    visual_config::visual_config_t visual_config;
    visual_config.init_hex_map(hex_map_config_json_string, start_data);
}

TEST(graph_tests, construct)
{
    auto get_map_str = [](std::string const &) { return map_json_string; };
    auto get_oob_str = [](std::string const &) { return oob_json_string; };

    start_data::start_data_t start_data;
    start_data.init_unit_defs(units_json_string);
    start_data.init_nations(nations_json_string);
    start_data.init_scenario(scenario_json_string, get_map_str, get_oob_str);

    graph::graph g;
    graph::hex_id_property_map hex_id_property_map;
    graph::edge_weight_property_map edge_weight_map;
    init_graph(
        g,
        hex_id_property_map,
        edge_weight_map,
        start_data.map().width,
        start_data.map().height
    );
}

int main(int argc, char **argv)
{
#ifdef _MSC_VER
    if (1 < argc)
        nations_json_string = file_slurp(argv[1]);

    if (2 < argc)
        map_json_string = file_slurp(argv[2]);

    if (3 < argc)
        oob_json_string = file_slurp(argv[3]);

    if (4 < argc)
        units_json_string = file_slurp(argv[4]);

    if (5 < argc)
        scenario_json_string = file_slurp(argv[5]);

    if (6 < argc)
        hex_map_config_json_string = file_slurp(argv[6]);
#endif

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
