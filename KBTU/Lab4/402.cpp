//
// Created by Abenezer on 2/16/2025.
// Leap year checker
#include <iostream>
using namespace std;

int main(){
  int year1 = 0;
  cin >> year1;
  if ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
  return 0;
}

