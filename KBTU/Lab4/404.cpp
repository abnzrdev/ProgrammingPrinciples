//
// Created by Abenezer on 2/16/2025.
// Number checker trivia
#include <iostream>
using namespace std;

int main(){
  int val1, val2 = 0;
  cin >> val1 >> val2;
  if (val1 > val2){
    cout << 1;
  }
  else if(val1 < val2){
    cout << 2;
  }
  else{
    cout << 0;
  }
  return 0;
}