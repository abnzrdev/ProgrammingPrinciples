//
// Created by Abenezer on 2/13/2025.
// Change the from miles to Kilometers
#include <iostream>
using namespace std;

int main(){
  int miles = 0;
  cout << "Enter the number of miles you covered : ";
  cin >> miles;
  double kms = miles * 1.609;
  cout << "The amount of distance covered is " << kms << " Kilometers.";
  return 0;
}