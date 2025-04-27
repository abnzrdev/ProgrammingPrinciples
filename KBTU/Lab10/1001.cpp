//
// Created by Abenezer
/*
Writing a structure and comparator to reverse an array
*/
#include <iostream>
#include <algorithm>

// Defining the structure
struct Array{
	int n;
	int arr[100];
};

// Defining the comparator
bool Compare(int a, int b){
	return a > b;
}

int main(){

	// Defining the indivdual here
	Array array;

	// Taking the input
	std::cin >> array.n;
	for(int i = 0; i < array.n; i++){
		std::cin >> array.arr[i];
	}

	std::sort(array.arr, array.arr + array.n, Compare);

	for(int i = 0; i < array.n; i++){
		std::cout << array.arr[i] << " ";
	}

	return 0;
}
