//
// Created by Abenezer on 4/28/2025.
//
#include <iostream>
#include <map>

int main(){
    // Declaring variables
    int size;
    std::cin >> size;
    std::map<int,int> nums;

    // Taking the inputs for the map
    for(int i = 0; i < size; i++){
        int num = 0;
        std::cin >> num;
        nums[num]++;
    }

    // Giving the output of all the inputs
    std::map<int, int>::iterator it1;
    for(it1 = nums.begin(); it1 != nums.end(); it1++){
        std::cout << it1 -> first << ' ' << it1 -> second << std::endl;
    }

    // defining iterator
    auto it = nums.rbegin();

    std::cout << it -> second;
}