//
// Created by Abenezer on 2/16/2025.
// Palindrome checker
#include <iostream>
using namespace std;

int main(){
  int num1 = 0;
  int digit = 0;
  int reversed = 0;
  cin >> num1;
  int original = num1;
  while (num1 > 0){
	digit = num1 % 10;
	reversed = reversed * 10 + digit;
	num1 /= 10;
  }
  if (original == reversed){
	cout << "YES";
  }
  else{
	cout << "NO";
  }
  return 0;
}