//
// Created by Abenezer on 4/21/2025.
/*
Finding the max of the set using map
 */

#include <iostream>
#include <map>
#include <algorithm>

int main(){

 // Declaring Variables
 int size;
 std::cin >> size;
 std::map<int, int> nums;

 // Taking input untill the size reached
 for(int i = 0; i < size; i++){
   int num = 0;
   std::cin >> num;
   nums[i] = num;
 }

 // Finding the max element
 int max_elt = nums[0];
 for(const auto &num : nums){
   if(num.second > max_elt){
     max_elt = num.second;
   }
 }

 // Giving the output
 std::cout << max_elt;
 return 0;
}
