//
// Created by Abenezer on 2/16/2025.
// Find the sum of all numbers from 1 to num1
#include <iostream>
using namespace std;

int main(){
  int num1,sum = 0;
  cin >> num1;
  while(num1 > 0){
    sum = sum + num1;
    num1 -= 1;
  }
  cout << sum;
  return 0;
}