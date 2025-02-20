//
// Created by Abenezer on 2/20/2025.
// Check the parity of two numbers at the same time
#include <iostream>
using namespace std;

int main(){
  int val1, val2;
  cin >> val1 >> val2;
  if (val1 % 2 == 0 && val2 % 2 == 0){
    cout << "Both are even";
  }
  else if (val1 % 2 != 0 && val2 % 2 == 0){
    cout << "The first is odd and the second is even";
  }
  else if(val1 % 2 == 0 && val2 % 2 != 0){
    cout << "The first is even and the second is odd";
  }
  else{
    cout << "Both are odd";
  }
  return 0;
}