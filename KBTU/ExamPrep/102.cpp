//
// Created by Abenezer on 2/20/2025.
// Reverse Integer with out a space
#include <iostream>
using namespace std;

int main(){
  int val1 = 0;
  int digit = 0;
  int reversed = 0;
  cin >> val1;
  while(val1 > 0){
    digit = val1 % 10;
    reversed = reversed * 10 + digit;
    val1 /= 10;
  }
  cout << reversed;
  return 0;
}
