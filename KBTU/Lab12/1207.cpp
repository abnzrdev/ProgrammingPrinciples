//
// Created by Abenezer on 4/23/2025.
/*
Finding the unique union
*/

#include <iostream>
#include <set>

int main(){
	// Declaring variables and taking inputs
	int size1, size2;
	std::cin >> size1 >> size2;
	std::set<int> nums1;

	// Taking the inputs of the first set
	int num1 = 0;
	for(int i = 0; i < size1; i++){
		std::cin >> num1;
		nums1.insert(num1);
	}

	// Taking the inputs of the second set
	int num2 = 0;
	for(int i = 0; i < size2; i++){
		std::cin >> num2;
		nums1.insert(num2);
	}

	// Giving the output
	for(int i : nums1){
		std::cout << i << " ";	
	}

	return 0;
}
