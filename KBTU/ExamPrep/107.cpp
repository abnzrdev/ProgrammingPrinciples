//
// Created by Abenezer on 4/26/2025.
/*
Finding the number of occurence of the max number
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    // Declaring variables and taking inputs
    int size;
    std::cin >> size;
    std::vector<int> nums;

    // Taking the inputs of the vector
    for(int i = 0; i < size; ++i){
        int num = 0;
        std::cin >> num;
        nums.push_back(num);
    }

    // Finding the maximum element using maxelement and count it
    int max = *std::max_element(nums.begin(), nums.end());
    int cntr = std::count(nums.begin(), nums.end(), max);

    // Giving out the output
    std::cout << "The maximum element is : " << max << " with the occurence of : " << cntr;

}