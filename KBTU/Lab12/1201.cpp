//
// Created by Abenezer on 4/21/2025.
/*
Finding the min of a given number
 */

#include <iostream>
#include <set>

int main(){
  //Declaring variables
  int size;
  std::cin >> size;
  std::set<int> nums;

  // Taking the inputs upto the size
  for(int i = 0; i < size; i++){
    int num = 0;
    std::cin >> num;
    nums.insert(num);
  }

  // Finding the minimum and giving the output
  int first_element = *nums.begin();
  std::cout << first_element;
  return 0;
}