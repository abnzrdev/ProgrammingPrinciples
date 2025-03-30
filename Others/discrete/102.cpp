//
// Created by Abenezer on 3/24/2025.
// Find the GCD and LCM
#include <iostream>
using namespace std;

int main(){
  //Declaration of variables and taking inputs
  int num1, num2, gcd, lcm;
  cin >> num1 >> num2;

  //logic to find the gcd
  int smaller = (num1 > num2) * num2 + (num2 > num1) * num1; //finding the smaller number
  for(int i = 1; i < smaller; i++){
    if((num1 % i == 0) && (num2 % i == 0)){
      gcd = i;
    }
  }

  //logic to find the lcm
  lcm = (num1 * num2) / gcd;

  // Printing out the result
  cout << "gcd = " << gcd << " lcm = " << lcm;
  return 0;
}
