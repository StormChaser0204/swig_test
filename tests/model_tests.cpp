#include <model.hpp>
#include <gtest/gtest.h>

// This horrible business works around the fact that the MS compiler
// chokes on string literals that are "too long".
#ifdef _MSC_VER
#include <fstream>

const char* nations_pbtxt_string = nullptr;
const char* map_pbtxt_string = nullptr;
const char* oob_pbtxt_string = nullptr;

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

TEST(whole_model_ops, init)
{
    EXPECT_TRUE(init_model(nations_pbtxt_string, map_pbtxt_string, oob_pbtxt_string));
}

int main(int argc, char **argv)
{
#ifdef _MSC_VER
    std::string nations_pbtxt_string_;
    std::string map_pbtxt_string_;
    std::string oob_pbtxt_string_;

    if (1 < argc) {
        nations_pbtxt_string_ = file_slurp(argv[1]);
	nations_pbtxt_string = nations_pbtxt_string_.c_str();
    }
    if (2 < argc) {
        map_pbtxt_string_ = file_slurp(argv[2]);
	map_pbtxt_string = map_pbtxt_string_.c_str();
    }
    if (3 < argc) {
        oob_pbtxt_string_ = file_slurp(argv[3]);
	oob_pbtxt_string = oob_pbtxt_string_.c_str();
    }
#endif

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
