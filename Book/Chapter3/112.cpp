//
// Created by Abenezer on 4/7/2025.
// Modifying the calculator from exercise 6
// to take the spelled value of numbers to create output
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    // Declaration of the vector
    vector<string> splld_out = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<int> digit = {0,1,2,3,4,5,6,7,8,9};

    //Calculator input variable declaration
	string input1, input2;
    char opr;

    // Changing to calculatable integer if the input is string
    cout << "Enter your first number : ";
    cin >> input1;
    cout << "Enter your second number : ";
    cin >> input2;
    cout << "Enter the operator : ";
	cin>> opr;

    // Checking if the input is digit or spelled out
    int num1, num2;
    if(isdigit(input1[0])){
      num1 = stoi(input1);
    }
    else{
      for(int i = 0; i < splld_out.size(); i++){
        if(input1 == splld_out[i]){
          num1 = i;
        }
      }
    }

    if(isdigit(input2[0])){
      num2 = stoi(input2);
    }
    else{
      for(int i = 0; i < splld_out.size(); i++){
        if(input2 == splld_out[i]){
          num2 = i;
        }
      }
    }

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
}

