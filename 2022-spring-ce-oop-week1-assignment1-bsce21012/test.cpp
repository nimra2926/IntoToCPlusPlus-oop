#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"

TEST_CASE( "2: V0", "[multi-file:2]" ) {
    SECTION( "swap values testing " ) {
        float x = 10; 
        float y = 20; 

        swapValues(&x,&y);

        REQUIRE( x == 20 );
        REQUIRE( y == 10 );
    }
}
TEST_CASE( "2: Ex0", "[multi-file:2]" ) {
    SECTION( "swap values testing " ) {
        float x = -3.5; 
        float y = 6.5; 

        swapValues(&x,&y);

        REQUIRE( x == 6.5 );
        REQUIRE( y == -3.5 );
    }
}
TEST_CASE( "2: V2", "[multi-file:2]" ) {
    SECTION( "swap array testing " ) {
        int x[] = {1,2,3,4}; 
        int y[] = {6,7,8,9}; 

        swapArrays(x,y,4);

        REQUIRE( x[0] == 6 );
        REQUIRE( x[3] == 9 );
        REQUIRE( y[0] == 1 );
        REQUIRE( y[2] == 3 );
        REQUIRE( y[3] == 4 );
    }
}
TEST_CASE( "2: Ex2", "[multi-file:2]" ) {
    SECTION( "swap array testing " ) {
        int x[]  = {1,2,3,4,5,6,7,8,9,10};
        int y[] = {11,12,13,14,15,16,17,18,19,20};
        swapArrays(x,y,10);

        REQUIRE( x[0] == 11 );
	REQUIRE( x[1] == 12 );
        REQUIRE( x[9] == 20 );
        REQUIRE( y[0] == 1 );
        REQUIRE( y[5] == 6 );
        REQUIRE( y[9] == 10 );

    }
}

TEST_CASE( "2: V4", "[multi-file:2]" ) {
    SECTION( "Reverse Aray testing " ) {
        int  x[] = {1,2,3,4,5,6,7,8,9,10};
        
        reverseArrayElements(x,10);
        REQUIRE( x[0] == 10 );
        REQUIRE( x[5] == 5 );
        REQUIRE( x[9] == 1 );
    }
}
TEST_CASE( "2: Ex4", "[multi-file:2]" ) {
    SECTION( "Reverse Aray testing " ) {
        int x[] = {11,12,13,14,15,16,17,18,19,20};

        reverseArrayElements(x,10);
        REQUIRE( x[0] == 20 );
        REQUIRE( x[5] == 15 );
        REQUIRE( x[9] == 11 );

    }
}
