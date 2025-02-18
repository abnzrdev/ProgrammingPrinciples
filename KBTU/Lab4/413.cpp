//
// Created by Abenezer on 2/18/2025.
// Maximum number finder
#include <iostream>
using namespace std;

int main(){
  int n = 0;
  int vals = 0;
  int max = -1000;
  cin >> n;
  cin >> vals;

  max = vals;
  for (int i = 1; i < n; i++){
    cin >> vals;
    if (vals > max){
      max = vals;
    }
  }
  cout << max;
  return 0;
}
