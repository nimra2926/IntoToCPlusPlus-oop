#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"

TEST_CASE( "2: V0", "[multi-file:2]" ) {
    SECTION( "____ testing " ) {
        
    }
}
TEST_CASE( "2: Ex0", "[multi-file:2]" ) {
    SECTION( "________ testing " ) {
        
    }
}
TEST_CASE( "2: V2", "[multi-file:2]" ) {
    SECTION( "_________ testing " ) {
        
    }
}
TEST_CASE( "2: Ex2", "[multi-file:2]" ) {
    SECTION( "__________ testing " ) {
        

    }
}

