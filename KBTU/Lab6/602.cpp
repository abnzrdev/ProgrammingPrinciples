//
// Created by Abenezer on 3/1/2025.
// Check if it is power of 2(using the logarithm)
#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int val1, org;
  double val2;
  cin >> val1;
  org = log2(val1);
  val2 = log2(val1);
  if(val2 == org){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
  return 0;
}