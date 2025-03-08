//
// Created by Abenezer on 3/7/2025.
// Find the Maximum in the Array
#include <iostream>
using namespace std;

int main(){
  int size, max_num;
  cin >> size;
  int arr[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  max_num = arr[0];
  for(int i = 1; i < size; i++){
    if(arr[i] > max_num){
      max_num = arr[i];
    }
  }
  cout << max_num;
  return 0;
}
