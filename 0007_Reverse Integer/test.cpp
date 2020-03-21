#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.hpp"

TEST_CASE("Two Sum", "twoSum")
{
    Solution s;
        
    REQUIRE( (s.reverse(123) == 321) );
    REQUIRE( (s.reverse(-123) == -321) );
    REQUIRE( (s.reverse(120) == 21) ); 
    REQUIRE( (s.reverse(1534236469) == 0) ); 

}