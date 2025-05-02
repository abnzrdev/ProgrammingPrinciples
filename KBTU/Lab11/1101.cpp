//
// Created by Abenezer on 4/11/2025.
// Infinite
// The input will stop by taking input that is different from the integer
#include <iostream>
#include <vector>

int main(){
  // declaration and taking inputs
  std::vector<int> nums;
  for(int num; std::cin >> num;){
    nums.push_back(num);
  }

  // doing the sum of them
  int sum = 0;
  for(int i = 0; i < nums.size(); i++){
    sum += nums[i];
  }

  std::cout << sum;
}