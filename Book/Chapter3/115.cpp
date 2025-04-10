//
// Created by Abenezer on 4/7/2025.
// Find all the prime up to 100
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  // Declaring variables
  vector<int> prime;
  vector<int> composite;
  vector<int> composite_unique;
  vector<int> number_list;

  // Creating a number list
  for(int i = 1; i < 101; i++){
    number_list.push_back(i);
  }

  // Creating the composite list
  for(int i = 4; i < 101; i++){
    for(int j = i - 1; j > 1; j--){
      int rem = i % j;
      if(rem == 0){
        composite.push_back(i);
      }
    }
  }

  // Getting the prime using num - composites using find function from the algorithm library
  for(int i = 2; i < number_list.size(); i++){
    if(find(composite.begin(), composite.end(), i) == composite.end()){
      prime.push_back(i);
    }
  }

  // Giving out the result
  for(int i = 0; i < prime.size(); i++){
    cout << prime[i] << " ";
  }

  return 0;
}
