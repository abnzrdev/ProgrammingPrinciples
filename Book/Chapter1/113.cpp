//
// Created by Abenezer on 2/15/2025.
// check if number is odd and even using if function
#include <iostream>
using namespace std;

int main(){
  int num = 0;
  cout << "Enter the number you want to check : ";
  cin >> num;
  if (num % 2 == 0){
    cout << "The number " << num << " even.";
  }
  else{
    cout << "The number " << num << " odd.";
  }
  return 0;
}