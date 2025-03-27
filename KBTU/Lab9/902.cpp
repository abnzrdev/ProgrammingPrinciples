//
// Created by Abenezer on 3/21/2025.
// Change every small to capital letters
#include <iostream>
using namespace std;

int main(){

  //Declaration of variables
  string input, upper_case;
  cin >> input;
  int length = input.length();

  for(int i = 0; i < length; i++){
    if(int(input[i]) >= 97 && int(input[i]) <= 122){
      upper_case += char(int(input[i]) - 32);
    }
    else{
      upper_case += input[i];
    }
  }

  cout << upper_case;
  return 0;
}