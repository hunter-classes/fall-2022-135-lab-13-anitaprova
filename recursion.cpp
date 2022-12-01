#include <iostream>

void printRange(int left, int right){
	if (left <= right) {
		std::cout << left << " ";
		printRange(left + 1, right);
	}
}
