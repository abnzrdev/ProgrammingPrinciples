//
// Created by Abenezer on 2/16/2025.
// Check if the number is odd or even using if statement
#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    cin >> num1;
    if (num1 == 0){
      cout << "None";
    }
    else if (num1 % 2 == 0){
      cout << "Even";
    }
    else{
      cout << "Odd";
    }
    return 0;
}