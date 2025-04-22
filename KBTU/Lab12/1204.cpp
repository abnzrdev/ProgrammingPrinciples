//
// Created by Abenezer on 4/22/2025.
/*
Frequency calculator for the second maximum element in the map
*/

#include <iostream>
#include <map>

int main(){
    //Declaring the variables and taking the inputs
    int size;
    std::cin >> size;
    std::map<int,int> nums;

    // Taking the inputs of the map with their frequencies
    for(int i = 0; i < size; i++){
    	int num;
		std::cin >> num;
		nums[num]++;       // taking the other value as the frequency
    }
	
    // finding the number
    auto it = nums.end();
    --it; // this is the last element
	--it; // this is the second last element and it is in key value pair

    std::cout << it -> second; // This will get the frequency of that second maximum number

    return 0;
}
