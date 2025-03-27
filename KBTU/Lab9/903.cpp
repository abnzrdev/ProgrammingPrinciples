//
// Created by Abenezer on 3/22/2025.
// Count the number of capital and small letters
#include <iostream>
using namespace std;

int main(){
  string inp = " ";
  cin >> inp;
  int len = inp.length();
  int small_count = 0;
  int capital_count = 0;

  for(int i = 0; i < len; i++){
    if(inp[i] >= 97){
      small_count += 1;
    }
    else{
      capital_count += 1;
    }
  }

  cout << small_count << " " << capital_count;
  return 0;
}
