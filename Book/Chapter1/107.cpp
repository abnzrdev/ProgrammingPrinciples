//
// Created by Abenezer on 2/13/2025.
// demonstration of narrowing typecasting
#include <iostream>
int main(){
  double d = 0;
  while(std::cin>>d){
    int i = d;
    char c = i;
    std::cout << "d == " << d << " i== " << i << " c== " << c;
  }
}