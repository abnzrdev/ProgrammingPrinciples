//
// Created by Abenezer on 4/10/2025.
// Finding the median of positive intgers
//
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  // declaration of variables
  std::vector<int> nums;
  int size = 0;

  std::cout << "How many numbers do you have : ";
  std::cin >> size;

  for(int i = 0; i < size; i++){
    int num = 0;
    std::cin >> num;
    nums.push_back(num);
  }

  sort(nums.begin(), nums.end());

  double median;
  nums.size() % 2 == 1 ? median = nums[nums.size() / 2] : median = (nums[(nums.size() / 2) - 1] + nums[nums.size() / 2]) / 2.0;


  std::cout << "The median of the entered value is : " << median << std::endl;
  return 0;
}
