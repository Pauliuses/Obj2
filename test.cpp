#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "head.h"

TEST_CASE("Student Comparison") {
    data d1("Antanas", "abc", 5.46),
            d2("Jonas", "bc", 1.12),
            d3("Tomas", "ad", 3.5),
            d4("Liepa", "df", 7.13);

    SECTION("Names (1st < 2nd)") {
        REQUIRE( compareNames(d1, d2) == true );
        REQUIRE( compareNames(d2, d3) == false );
    }
    SECTION("Surnames (1st < 2nd)") {
        REQUIRE( compareSurnames(d1, d2) == true );
        REQUIRE( compareSurnames(d2, d3) == false );
    }
    SECTION("Final Grades (1st < 2nd)") {
        REQUIRE( compareFinals(d1, d2) == false );
        REQUIRE( compareFinals(d2, d3) == true );
    }
}

TEST_CASE("Grade calculations") {
    std::vector<int> paz1{1, 5, 8, 4}, paz2{4, 1}, paz3{10}, paz4{7, 2, 3};

    SECTION("Average") {
        REQUIRE( AverageGrade(paz1) == 4.5 );
        REQUIRE( AverageGrade(paz2) == 2.5 );
        REQUIRE( AverageGrade(paz3) == 10 );
        REQUIRE( AverageGrade(paz4) == 4);
    }
    SECTION("Median") {
        REQUIRE( MedianGrade(paz1) == 4.5);
        REQUIRE( MedianGrade(paz4) == 3 );
        REQUIRE( MedianGrade(paz3) == 10 );
    }
}