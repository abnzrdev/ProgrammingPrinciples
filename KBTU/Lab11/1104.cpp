//
// Created by Abenezer on 4/11/2025.
// Stay Positive
//
#include <iostream>
#include <vector>
#include <cmath>

int main(){
  // Taking inputs
  int size, noc;
  std::cin >> size >> noc;
  std::vector<int> nums(size);

  // Taking the others noc and calculating the average
  int avg = 0;
  int sum = 0;
  for(int i = 0; i < size; i++){
    std::cin >> nums[i];
    sum += nums[i];
  }
  avg = sum / nums.size();

  // giving out the result
  std::cout << abs(avg - noc);

  return 0;

}
