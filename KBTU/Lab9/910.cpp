//
// Created by Abenezer on 3/23/2025.
// Last alphabetical order
#include <iostream>
using namespace std;

int main(){
  // Declaration of varaibles and taking input
  string str = "";
  cin >> str;
  char last = ' ';
  int max_ascii = 0;
  int len = str.length();

  // Create the ascii code for all characters
  // Compare them
  max_ascii = int(str[0]);
  for(int i = 1; i < len; i++){
    if(int(str[i]) > max_ascii){
      max_ascii = int(str[i]);
    }
  }

  // Giving the output changing the ascii code to the chatacter
  cout << char(max_ascii);
  return 0;
}
