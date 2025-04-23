//
// Created by Abenezer on 4/22/2025.
/*
Finding the unique numbers
*/

#include <iostream>
#include <set>

int main(){
	//Declaring variables and taking inputs
	std::set<int> nums;

	//Inserting the individual num to the set 
	for(int num = 0; std::cin >> num;){
		nums.insert(num);
	}

	std::cout << nums.size(); // Finding the size of the set

	return 0;
}
