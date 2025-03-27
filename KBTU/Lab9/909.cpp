//
// Created by Abenezer on 3/23/2025.
// Shift the letter
#include <iostream>
using namespace std;

int main(){
  string str = "";
  string shftd_str = "";
  cin >> str;
  int len = str.length();

  for(int i = 0; i < len; i++){
    if(str[i] == 'z'){
      shftd_str += 'a';
    }
    else{
      shftd_str += char(int(str[i]) + 1);
    }
  }

  cout << shftd_str;
  return 0;
}
