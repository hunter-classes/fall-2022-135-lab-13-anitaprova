#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"
#include <string>

TEST_CASE("TASK A") {
	CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
	CHECK(printRange(13, 15) == "13 14 15 ");
}

TEST_CASE("TASK B") {
	CHECK(sumRange(1, 3) == 6);
	CHECK(sumRange(-2, 10) == 52);
	CHECK(sumRange(50, 55) == 315);
}

TEST_CASE("TASK C") {
	int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    CHECK(sumArray(arr, size) == 43); // Add all elements
    CHECK(sumArray(arr, 5) == 34); // Add up first five elements
}

TEST_CASE("TASK D") {
	CHECK(isAlphanumeric("ABCD") == 1);
	CHECK(isAlphanumeric("Abcd1234xyz") == 1);
	CHECK(isAlphanumeric("KLMN 8-7-6") == 0);
	CHECK(isAlphanumeric("CUPCAKES!@#$%^&") == 0);
}
