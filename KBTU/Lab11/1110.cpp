//
// Created by Abenezer on 4/13/2025.
// Number of entries
/*
Take the size, and the number to check
Take the inputs of the vector
Find out the frequency of the given number
 */

#include <iostream>
#include <vector>

int main(){
  // Declration and taking inputs
  int size, num_chck;
  std::cin >> size >> num_chck;
  std::vector<int> nums(size);

  // Take the inputs of the vector
  for(int i = 0;i < size; i++){
    int num = 0;
    std::cin >> num;
    nums.push_back(num);
  }

  // Finding the freq of num_chck
  int cntr = 0;
  for(int num : nums){
    if(num == num_chck){
      cntr++;
    }
  }

  // Giving out the result
  std::cout << cntr;

  return 0;
}
