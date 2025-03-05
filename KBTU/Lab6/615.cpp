//
// Created by Abenezer on 3/3/2025.
// Iterative and recursive methods power of two
#include <iostream>
using namespace std;

int pow_two(int exp){
  int base, result;
  base = 2;
  result = 1;
    for(int i = 0; i < exp; i++){
      result *= base;
    }
  return result;
}

int pow_two_rec(int exp){
  int base;
  base = 2;
  if (exp == 0){
    return 1;
  }
  else{
    return base * pow_two_rec(exp - 1);
  }
}

int main(){
  int exp;
  cin >> exp;
  cout << pow_two(exp) << " " << pow_two_rec(exp);
  return 0;
}