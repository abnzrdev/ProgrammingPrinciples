//
// Created by Abenezer on 3/23/2025.
// First and last occurence of a letter
#include <iostream>
using namespace std;

int main(){
  // Declaration of variables
  string str = "";
  char chr = ' ';
  cin >> str >> chr;
  int len = str.length();
  int first = 0;
  int last = 0;

  // Finding the first occurence
  for(int i = 0; i < len; i++){
    if(str[i] == chr){
      first = i;
      break;
    }
  }

  // Finding the last occurence
  for(int i = len - 1; i >= 0; i--){
    if(str[i] == chr){
      last = i;
      break;
    }
  }

  // additional condition - if the chr occur once
  if(first == last){
    cout << first;
  }
  else{
    cout << first << " " << last;
  }

  return 0;
}
