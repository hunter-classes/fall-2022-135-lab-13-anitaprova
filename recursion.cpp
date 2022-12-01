#include <iostream>

void printRange(int left, int right){
	if (left <= right) {
		std::cout << left << " ";
		printRange(left + 1, right);
	}
}

int sumRange(int left, int right) {
	if(left == right) {
		return right;
	}
	else {
		return left + sumRange(left + 1, right);
	}
}

int sumArray(int *arr, int size) {

}
