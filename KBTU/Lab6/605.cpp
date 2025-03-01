//
// Created by Abenezer on 3/2/2025.
// Print out integer power of two that do not exceed N
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int val1, logthmed;
  cin >> val1;
  logthmed = log2(val1);
  for (int i = 0; i <= logthmed; i++){
    cout << pow(2,i) << " ";
  }
  return 0;
}