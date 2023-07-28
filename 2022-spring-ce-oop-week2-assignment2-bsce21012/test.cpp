#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"

TEST_CASE( "2: Ex0", "[multi-file:2]" ) {
    SECTION( "array testing " ) {
	    int * evenNo=new int[1];
	    evenNo= findEven("test11.txt", 0, 1, 0) ;
        REQUIRE(evenNo[0]==2);
        REQUIRE(evenNo[1]==4);
    }
}

TEST_CASE( "2: Ex1", "[multi-file:2]" ) {
    SECTION( "array testing " ) {
        int * evenNo=new int[1];
	    evenNo= findEven("test12.txt", 0, 1, 0) ;
        REQUIRE(evenNo[0]==2);
        REQUIRE(evenNo[1]==42);
        REQUIRE(evenNo[2]==66);
    }
}
TEST_CASE( "2: Ex2", "[multi-file:2]" ) {
    SECTION( "array testing " ) {
	int j = 0;
	int size = 1;
	char* ptr = new char[size];
	ptr = read("test21.txt", size, j, ptr);
	bool x = ptr[0] == 'a' && ptr[1] == 'a';
	bool y = ptr[8] == 'y' && ptr[9] == 'y';
	REQUIRE(x==true);
	REQUIRE (y==true);
    }
}
TEST_CASE( "2: Ex3", "[multi-file:2]" ) {
    SECTION("array testing ") {
        int j = 0;
        int size = 1;
        char *ptr = new char[size];
        ptr = read("test22.txt", size, j, ptr);
        bool x = ptr[0] == 'i' && ptr[1] == 'i';
        REQUIRE (x == true);
        bool y = ptr[6] == 'o' && ptr[7] == 'o';
        REQUIRE (y == true);
    }
}