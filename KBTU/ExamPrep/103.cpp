//
// Created by Abenezer on 2/20/2025.
// Reverse a number that includes a space
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string val1;
  getline(cin, val1);
  reverse(val1.begin(),val1.end());
  cout << val1;
  return 0;
}
