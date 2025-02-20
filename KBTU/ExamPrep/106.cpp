//
// Created by Abenezer on 2/20/2025.
// Check if a number is a power of two using cmath library
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int val1;
  cin >> val1;
  double sqrtval = sqrt(val1);
  if(int(sqrtval) == sqrtval){
    cout << "Power of two";
  }
  else{
    cout << "Not.";
  }
  return 0;
}
