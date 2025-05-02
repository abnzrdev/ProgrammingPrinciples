//
// Created by Abenezer on 4/12/2025.
// Find the lost number
//
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  //Declaration and taking inputs
  int size = 0;
  std::cin >> size;
  std::vector<int> nums;

  //Taking the array parts
  int num = 0;
  for(int i = 0; i < size; i++){
    std::cin >> num;
    nums.push_back(num);
  }

  sort(nums.begin(), nums.end());   // sort the numbers

  // Finding the missing number
  int msng = 0;
  for(int i = 0; i <= size; i++){
    if(i != nums[i]){
      msng = i;
      break;
    }
  }

  std::cout << msng;                 // Giving out the value

  return 0;
}
