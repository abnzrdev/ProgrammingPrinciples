//
// Created by Abenezer on 3/16/2025.
// Find the second Maximum number
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

//  Declaring Variables and taking the size as inp
  int size;
  cin >> size;
  int arr[size * size];

//  Taking the array indexes
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      cin >> arr[i];
    }
  }

  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      cout << arr[i];
    }
    cout << endl;
  }
}