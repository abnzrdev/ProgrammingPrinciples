//
// Created by Abenezer on 2/15/2025.
// increasing number system using comma as separator totally coded by mathematical operation
#include <iostream>
using namespace std;

int main(){
  int val1,val2,val3;
  cout << "Enter the three values: ";
  cin >> val1 >> val2 >> val3;
  int min_of_2 = (val1 > val2) * val2 + (val1 < val2) * val1;
  int max_of_2 = (val1 > val2) * val1 + (val1 < val2) * val2;
  cout << (min_of_2 > val3) * val3 + (min_of_2 < val3) * min_of_2 << ", " << (max_of_2 > val3) * val3 + (max_of_2 < val3) * max_of_2 << ", " << (max_of_2 > val3) * max_of_2 + (max_of_2 < val3) * val3;
  return 0;
}