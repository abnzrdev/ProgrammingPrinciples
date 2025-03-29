//
// Created by Abenezer on 2/26/2025.
// Cm to In converter
#include <iostream>
using namespace std;

int main(){
  const double cm_per_inch = 2.54;
  int length = 0;
  char unit = ' ';

  cout << "Enter the length with the corresponding unit(i/c) : ";
  cin >> length >> unit;

  if(unit == 'i'){
    cout << "The lenght is " << length * cm_per_inch << " cm!";
  }
  else if(unit == 'c') {
    cout << "The length is "  << length / cm_per_inch << " inch!";
  }
  else {
    cout << "I don't know the unit!!!";
  }
  return 0;
}
