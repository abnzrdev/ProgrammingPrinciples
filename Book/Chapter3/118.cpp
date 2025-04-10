//
// Created by Abenezer on 4/10/2025.
// Calculating mode of the positive integers

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

  sort(nums.begin(),nums.end());   // sort the numbers

  int mode = nums[0];
  int max = 0;
  int cntr = 1;
  for(int i = 1; i < nums.size(); i++){
    if(nums[i - 1] == nums[i]){
      cntr++;
    }
    if(max < cntr){
      max = cntr;
      cntr = 1;
      mode = nums[i - 1];
    }
  }

  std::cout << "The mode of these positvie integer is : " << mode << " Occured " << max << " times.";
  return 0;

}
