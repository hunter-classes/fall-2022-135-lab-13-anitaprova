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

int sumArrayInRange(int *arr, int left, int right) {
	if(left == right) {
		return arr[right];
	}
	else {
		return arr[left] + sumArrayInRange(arr, left + 1, right);
	}
}

int sumArray(int *arr, int size) {
	return sumArrayInRange(arr, 0, size - 1);
}

bool isAlphanumeric(string s) {
	
}
