//
// Created by Abenezer on 2/11/2025.
//
#include <iostream>
int main(){
  char previous[64];
  char current[64];
  while (std::cin >> current) {
    if (previous == current)
      std::cout << "repeated word: " << current << "\n";
    previous[64] = current[64];
  }
  return 0;
}