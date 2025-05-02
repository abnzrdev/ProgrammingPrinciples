//
// Created by Abenezer on 4/13/2025.
// At least two times
//
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    // Take the size of the vector
    int size;
    std::cin >> size;
    std::vector<int> nums;

    // Taking the vector inputs
    int num = 4;
    for(int i = 0; i < size; i++){
        std::cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end()); // sorting the num

    // Checking if the numbers are repeated two times or more
    int cntr = 1;
    int dbct = 0;
    for(int i = 1; i < size; i++){
      if(nums[i - 1] == nums[i] && nums[i] != nums[i - 2]){
        cntr++;
      } else {
        cntr = 1;
      }
      if(cntr >= 2){
        dbct++;
      }
    }

    std::cout << dbct;
    return 0;
}
