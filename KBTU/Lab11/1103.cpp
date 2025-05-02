//
// Created by Abenezer on 4/14/2025.
// Vector pairs bard game
//
#include <iostream>
#include <vector>

int main(){
  // Declaring varaibles
  std::vector<int> nums;
  for(int num; std::cin >> num && num != 0;){
    nums.push_back(num);
  }

  // Giving the output by adding the pairs
  int sum = 0;
  int ind = 1;
  int parity = (nums.size() % 2 == 1) * (nums.size() / 2 + 1) + (nums.size() % 2 == 0) * (nums.size() / 2);
  for(int i = 0; i < parity; i++){
    if(i == nums.size() - ind ){
      sum = nums[i];
    } else {
      sum = nums[i] + nums[nums.size() - ind];
    }
    std::cout << sum << " ";
    sum = 0;
    ind++;
  }

  return 0;
}
