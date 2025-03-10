//
// Created by Abenezer on 3/9/2025.
// Sum of the numbers in array
#include <iostream>
using namespace std;

int main(){
  long long int size, pos1, pos2, sum;
  sum = 0;
  cin >> size >> pos1 >> pos2;
  long long int arr[size];

  for(long long int i = 0; i < size;i++){
    cin >> arr[i];
  }

  for(long long int i = pos1 - 1; i <= pos2 - 1; i++){
    sum += arr[i];
  }

  cout << sum;
  return 0;
}