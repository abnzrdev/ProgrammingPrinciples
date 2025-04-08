//
// Created by Abenezer on 4/5/2025.
// Simple Calculator
#include <iostream>
using namespace std;

int main(){
  // Declaring variables and taking inputs
  double num1, num2;
  char opr;
  cout << "Enter your values separated by space(num1 num2 operator) : ";
  cin >> num1 >> num2 >> opr;

  // Logic of the calculator of based on the operator
  if(opr == '+'){
    cout << num1 + num2 << endl;
  }
  else if(opr == '-'){
    cout << num1 - num2 << endl;
  }
  else if(opr == '*'){
    cout << num1 * num2 << endl;
  }
  else if(opr == '/'){
    cout << num1 / num2 << endl;
  }
  else{
    cout << "I don't know this operator" << endl;
  }

  return 0;

}
