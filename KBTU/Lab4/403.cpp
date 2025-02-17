//
// Created by Abenezer on 2/16/2025.
// Super Number
#include <iostream>
using namespace std;

int main(){
  int n = 0;
  cin >> n;
  if (n % 2 != 0){
    cout << "Super";
  }
  else if(n % 2 == 0 && n >= 2 && n <= 5){
    cout << "Not Super";
  }
  else if(n % 2 == 0 && n >= 6 && n <= 20){
    cout << "Super";
  }
  else{
    cout << "Not Super";
  }
  return 0;
}