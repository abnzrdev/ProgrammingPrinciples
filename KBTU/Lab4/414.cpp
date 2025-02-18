//
// Created by Abenezer on 2/18/2025.
// Add the numbers given
// Sum can be very large number..
#include <iostream>
using namespace std;

int main(){
  int n = 0;
  int vals = 0;
  long long int sum = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> vals;
    sum += vals;
  }
  cout << sum;
  return 0;
}