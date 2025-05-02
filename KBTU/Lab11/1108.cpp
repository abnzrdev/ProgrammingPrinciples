//
// Created by Abenezer on 4/13/2025.
// Finding the most frequent element
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    // Take the size of the vector
    int size;
    std::cin >> size;
    std::vector<int> nums;

    // Taking the vector inputs
    int num = 4;
    for(int i = 0; i < size; i++){
        std::cin >> num;
        num = abs(num);
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end()); // sorting the num

    // Finding the most frequent elements
    int cntr = 1;
    int max = 1;
    int max_freq = nums[0];

    for(int i = 1; i < size; i++){
      if(nums[i] == nums[i - 1]){
        cntr++;
      } else {
        cntr = 1;     // reset the counter to 1
      }
      if(max < cntr){
        max = cntr;
        max_freq = nums[i];
      }
    }

    // Giving out the result of the loop
    std::cout << max_freq;
}
