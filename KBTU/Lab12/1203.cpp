//
// Created by Abenezer on 4/21/2025.
/*
Finding the occurence of the second maximium input of the map
Using Map
 */

#include <iostream>
#include <map>

int main() {
    // Declare variables
    int size;
    std::cin >> size;
    std::map<int, int> nums;

    // Populate the map with numbers and their frequencies
    for (int i = 0; i < size; ++i) {
        int num;
        std::cin >> num;
        nums[num]++;
    }

    // Find the second minimum element
    auto it = nums.begin();
    if (nums.size() < 2) {
        std::cout << 0 << std::endl; // If there are less than 2 unique elements
        return 0;
    }
    ++it; // Move to the second minimum element

    // Output the frequency of the second minimum element
    std::cout << it->second << std::endl;

    return 0;
}