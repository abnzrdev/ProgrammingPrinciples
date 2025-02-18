//
// Created by Abenezer on 2/18/2025.
// Positive counter
#include <iostream>
using namespace std;

int main(){
  int val1,val2,count = 0;
  cin >> val1;
  for (int i = 0; i < val1; i++){
    cin >> val2;
    if (val2 > 0){
      count++;
    }
  }
  cout << count;
  return 0;
}