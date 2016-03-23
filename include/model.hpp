#pragma once

#if defined(BUILD_LIBRARY) && defined(_MSC_VER)
#define MODEL_API __declspec(dllexport)
#else
#define MODEL_API
#endif

extern "C" {

    struct supply_check_hex_t
    {
        int owner_id;

        // These values are all encoded such that nation N has an X present if
        // (X & (1 << N)).
        int ship;
        int nonship_unit;
        int base_with_fighters;
        int planet;
        int SB;
        int BATS;
        int MB;
        int convoy;
        int supply_tug;
    };

    struct ga_hex_t
    {
        int a;
        float b;
    };

    MODEL_API
    int test (int i);

    MODEL_API
    float test_2 (int n, float floats[]);

    MODEL_API
    float test_3 (int n, ga_hex_t* hexes);

    MODEL_API
    void init_model (const char* nations_str, const char* map_str, const char* oob_str);

    MODEL_API
    void reset_model ();

    MODEL_API
    int save_model (const char* filename);

    MODEL_API
    int load_model (const char* filename);

    // Returns an int for each hex, containing a grid ID in the first 8 bits
    // (0 is no grid, 1 is main capital grid, 2 is main offmap grid, anything
    // else is a partial grid).  Bits 8-23 contain the nations supplying this
    // hex (a '1' in bit N indicates that the nation with ID N-8 is supplying
    // it).  Bit 24 contains a flag indicating supplies must be paid for by
    // the hex's owner to supply ships in this hex (meaning the hex is in a
    // partial supply grid, and does not include a free-supply feature like a
    // SB, BATS, or planet).
    MODEL_API
    int* determine_supply (
        int w, int h,
        supply_check_hex_t hexes[],
        int neutral_zone_id,
        int nations,
        int nation_team_membership[],
        int capitals[],
        int max_offmap_border_hexes,
        int offmap_border_hexes[]
    );
}
