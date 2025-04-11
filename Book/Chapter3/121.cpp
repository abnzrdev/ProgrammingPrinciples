//
// Created by Abenezer on 4/11/2025.
// Quadratic formula calculator
/*
Take the input of a, b, c => ax^2 + bx +c
and the formula will be -b +- b^2 - 4ac ** 0.5
 */

#include <iostream>
#include <cmath>

int main(){
  // Declaration of Variables
  int a,b,c;
  std::cout << "Give your values : ";
  std::cin >> a >> b >> c;

  //Formula to calculate the quadratic function
  double r1,r2;
  double d1 = b * b;
  double d2 = -4 * a * c;
  double d3 = d1 + d2;
  double d4 = sqrt(d3);

  std::cout << -b << std::endl;

  r1 = (-b + d4) / (2.0 * a);
  r2 = (-b - d4) / (2.0 * a);

  // Giving out the result
  std::cout << r1 << " " << r2 <<  std::endl;

  return 0;
}