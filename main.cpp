#include <iostream>
#include "recursion.h"

int main() {
	//TASK A
	printRange(-2, 10);
	std::cout << "\n";
	
	//TASK B
	int x = sumRange(7, 3);
	std::cout << "This is " << x << std::endl;   // 6
	
	int y = sumRange(-2, 10);
	std::cout << "That is " << y << std::endl;
		
	//TASK C
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

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

    delete[] arr;	
	
	//TASK D
	std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
	std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
	std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;
	
	return 0;
}
