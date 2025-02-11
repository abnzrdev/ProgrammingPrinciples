//
// Created by Abenezer on 2/10/2025.
//
#include <iostream>
int main(){
   int num1, num2;
   std::cin >> num1 >> num2;
   std::cout << (num1 > num2) * num1 + (num1 < num2) * num2;
}