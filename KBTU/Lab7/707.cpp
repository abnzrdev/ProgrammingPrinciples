//
// Created by Abenezer on 3/8/2025.
// Sorted array in reverse order
// lets use the algorithm function
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int size;
  cin >> size;
  int arr[size];

  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }

  sort(arr, arr + size);

  for(int i = size - 1; i >= 0; i--){
    cout << arr[i] << " ";
  }

  return 0;
}
