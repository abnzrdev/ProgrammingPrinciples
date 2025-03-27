//
// Created by Abenezer on 3/16/2025.
// Soldiers

#include <iostream>
using namespace std;

int main(){
  int size = 0, start = 1;
  cin >> size;
  int arr[size][size];
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      cout << start << " ";
    }
    cout << endl;
    start += 2;
  }
}
