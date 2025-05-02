//
// Created by Abenezer on 4/23/2025.
/*
Finding the newbie 
 */

#include <iostream>
#include <algorithm>

int main(){
	// Decalring the variables and taking the inputs
	int size = 0;
	std::cin >> size;

	// Taking the inputs to the array
	int arr[size];
	for(int i = 0; i < size; i++){
		int num = 0;
		std::cin >> num;
		arr[i] = num;
	}

	// Checking if the input is newbie or not
	for(int i = size - 1; i >= 0; i--){
		bool is_newbie = true;
		for(int j = i - 1; j >= 0; j--){
			if(arr[i] != arr[j]){
				continue;
			}
			else{
				is_newbie = false;
				break;
			}
		}
		if(is_newbie){
			std::cout << "Yes" << std::endl;
		}
		else{
			std::cout << "No" << std::endl;
		}
	}

	return 0;
}
