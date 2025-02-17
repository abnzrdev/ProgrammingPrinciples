//
// Created by Abenezer on 2/17/2025.
// Is it the power of two?
#include <iostream>
using namespace std;

int main(){
  int num = 0;
  cin >> num;
  while(num > 1){
    if (num % 2 == 0){
      num /= 2;
    }
    else{
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}