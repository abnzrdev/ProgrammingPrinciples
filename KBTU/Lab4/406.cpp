//
// Created by Abenezer on 2/16/2025.
// Flip the coin(use the ternary operator)
#include <iostream>
using namespace std;

int main(){
  int val1 = 0;
  cin >> val1;
  cout << (val1 % 2 == 0 ? "EAGLE" : "TAILS");
  return 0;
}