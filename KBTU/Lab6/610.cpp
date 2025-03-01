//
// Created by Abenezer on 3/2/2025.
// Check if the number is valid or not
// Valid means containing even digits only
#include <iostream>
using namespace std;

void valid(){
    int val1, digit;
    cin >> val1;
    while(val1 > 0){
      digit = val1 % 10;
      if (digit % 2 != 0){
        cout << "Not valid";
        return;
      }
      val1 /= 10;
    }
    cout << "Valid";
}

int main(){
    valid();
    return 0;
}