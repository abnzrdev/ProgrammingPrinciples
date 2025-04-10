//
// Created by Abenezer on 4/10/2025.
//
/*
Create the vector of strings
sort them lexically
find the first(min)
find the last(max)
find the mode
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  // Declaration of Variables
  std::vector<std::string> strs;
  std::string str = " ";

  // Declaring the size of the string
  std::cout << "How many strings do you have to enter : ";
  int size = 0;
  std::cin >> size;

  // Take the input of the vector
  for(int i = 0; i < size; i++){
    std::cin >> str;
    strs.push_back(str);
  }

  sort(strs.begin(), strs.end()); // sorting the vector

  // Finding the mode of the sequence of the strings
  std::string mode = strs[0];
  int max = 0;
  int cntr = 1;

  // Logic to find the mode of those strings
  for(int i = 1; i < strs.size(); i++){
    if(strs[i - 1] == strs[i]){
      cntr++;
    }
    if(max < cntr){
      max = cntr;
      mode = strs[i - 1];
    }
    cntr = 1;
  }

  //Giving out the desired elements
  std::cout << "The minimum element is " << strs[0] << std::endl
            << "The maxmium element is " << strs[strs.size() - 1] << std::endl
            << "The mode of the sequence of the strings is : " << mode << " with the occurence number of " << max
            << "!!" << std::endl;

  return 0;
}
