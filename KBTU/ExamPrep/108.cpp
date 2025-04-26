//
// Created by Abenezer on 4/26/2025.
/*
Finding the minimum number frequency using map
*/

#include <iostream>
#include <map>

int main(){
    // Declaration and getting the size input
    int size = 0;
    std::cin >> size;
    std::map<int, int> nums;

    // Taking the input and their frequency
    for(int i = 0; i < size; i++){
        int num = 0;
        std::cin >> num;
        nums[num]++;
    }

    auto it = nums.begin(); // Defining the iterator          usign rbegin() for the last element
    std::cout << it->second;
}
