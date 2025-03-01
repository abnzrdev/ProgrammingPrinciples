//
// Created by Abenezer on 3/2/2025.
// Function - finding hypotuese
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void find_hyp(){
  double val1, val2, hyp;
  cin >> val1 >> val2;
  hyp = sqrt(pow(val1, 2) + pow(val2, 2));
  cout << setprecision(4) << hyp;
}

int main(){
  find_hyp();
  return 0;
}
