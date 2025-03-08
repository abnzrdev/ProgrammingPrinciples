//
// Created by Abenezer on 3/7/2025.
// Positive number counter
#include <iostream>
using namespace std;

int main(){
  int size, count;
  count = 0;
  cin >> size;
  int arr[size];

  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }

  for (int i = 0; i < size; i++){
    if (arr[i] > 0){
      count += 1;
    }
  }
  cout << count;
  return 0;
}
