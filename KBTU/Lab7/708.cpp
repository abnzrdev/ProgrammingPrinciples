//
// Created by Abenezer on 3/10/2025.
// Position reverse array
#include <iostream>
using namespace std;

int main() {
  long long int size, pos1, pos2, temp;
  cin >> size >> pos1 >> pos2;

  long long int arr[size];

  for (long long int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  while(pos1 < pos2){
    swap(arr[pos1 - 1], arr[pos2 - 1]);
    pos1++;
    pos2--;
  }

  for (long long int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

