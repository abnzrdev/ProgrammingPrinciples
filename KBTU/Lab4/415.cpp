//
// Created by Abenezer on 2/18/2025.
// Position of the maximum
#include <iostream>
using namespace std;

int main(){
  int n = 0;
  int vals = 0;
  int max = 0;
  int counter;
  cin >> n;
  cin >> vals;
  max = vals;
  counter = 1;
  for (int i = 1; i < n ;i++ ){
    cin >> vals;
    if (max < vals){
      max = vals;
      counter = i;
    }
  cout << counter;
  return 0;
  }
}