/*
Author: Anita Prova
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 13

Recursion lab
*/

#include <iostream>
#include <string>
#include <cctype>

void printRange(int left, int right){
	if (left <= right) {
		std::cout << left << " ";
		printRange(left + 1, right);
	}
}

int sumRange(int left, int right) {
	if(left > right) {
		return 0;
	}

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

bool isAlphanumeric(std::string s) {
	if(s.length() == 0) {
		return true;
	}	
	else {
		return ( isalpha(s[0]) || isdigit(s[0]) ) && isAlphanumeric(s.substr(1));
	}
}
