//
// Created by Abenezer on 3/2/2025.
// Factorial of number using recursive function
#include <iostream>
using namespace std;

int factorial(int num){
  if (num > 1){
    return num * factorial(num - 1);
  }
  else{
    return 1;
  }
}

int main(){
  int val1;
  cin >> val1;
  cout << factorial(val1);
  return 0;
}
