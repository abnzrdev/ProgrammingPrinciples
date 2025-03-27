//
// Created by Abenezer on 3/25/2025.
// String to numbers
#include <iostream>
using namespace std;

int main(){

// Declaration of Variables
  string letter_str;
  cin >> letter_str;
  string let_lab = "ZERONETWOTHRFOUFIVSIXSEVEIGNIN";
  string num_lab = "0123456789";
  string new_num = "";
  string sub_let_lab = "";
  string sub_let_str = "";
  int len = letter_str.length();
  int len_lab = let_lab.length();
  int ind = 0;

// Changing from the string to the number string
  for(int i = 0; i < len_lab; i += 3){
    sub_let_lab = let_lab.substr(i,3);
    for(int j = 0; j < len; j++){
      sub_let_str = letter_str.substr(ind,3);
      if(sub_let_str == sub_let_lab){
        new_num += num_lab[j];
      }
      else{
        continue;
      }
      ind += 3;
    }
  }

// Printing out result
  cout << new_num;
  return 0;

}
