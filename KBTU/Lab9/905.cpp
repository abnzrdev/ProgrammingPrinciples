//
// Created by Abenezer on 3/22/2025.
// Palindrome string
#include <iostream>
using namespace std;

int main(){
//  declaring variables
  string str = " ";
  string str_rev = "";
  cin >> str;
  int len = str.length();

// reversing the string
  for(int i = len - 1; i >= 0; i--){
    str_rev += str[i];
  }

//  checking palindrome
  if(str == str_rev){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
  return 0;
}
