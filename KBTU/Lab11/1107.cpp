//
// Created by Abenezer on 4/13/2025.
// Find number without pair
//
#include <iostream>
#include <vector>

int main(){
  // Take the size of the vector
  int size;
  std::cin >> size;
  std::vector<int> nums(size);

  // Taking the vector inputs
  for(int i = 0; i < size; i++){
    std::cin >> nums[i];
  }

  // Finding the number using XOR function 1 2 3  1 2 3 7
  // It is very important to remeber the bitwise operator to remember when working
  // with unique numbers
  int unq = 0;
  for(int num : nums){
    unq ^= num; // unq = unq ^ num
  }


  std::cout << unq;
}
