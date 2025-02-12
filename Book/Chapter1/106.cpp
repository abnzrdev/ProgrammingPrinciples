//
// Created by Abenezer on 2/13/2025.
// type casting most of the from int to char is narrowing because the
// cause data loss because the target type may not be able to hold the full range of values from the source type.
#include <iostream>
int main(){
  int num = 10;
  char c = num;
  std::cout << c;
}