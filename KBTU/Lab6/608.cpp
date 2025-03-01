//
// Created by Abenezer on 3/2/2025.
// I am totally positive(make it a function)
#include <iostream>
using namespace std;

void positive_maker(){
  int val1;
  cin >> val1;
  if (val1 < 0){
    val1 = -(val1);
  }
  else{
    val1 = val1;
  }
  cout << val1;
}

int main(){
  positive_maker();
  return 0;
}