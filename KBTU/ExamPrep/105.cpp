//
// Created by Abenezer on 2/20/2025.
// Check palindrdomity of the string using algorithm library
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string val1, original;
  getline(cin, val1);
  original = val1;
  reverse(val1.begin(),val1.end());
  if (original == val1){
    cout << "Palindrome";
  }
  else{
    cout << "Not Palindrome!";
  }
  return 0;
}
