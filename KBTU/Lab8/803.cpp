//
// Created by Abenezer on 3/15/2025.
// Finding the maximum element in the main diagonal
#include <iostream>
using namespace std;

int main(){

//  declaring the variables
  int size = 0, max = 0, row = 1, col = 1;
  cin >> size;
  int arr[size][size];

//  getting the array elements
    for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
        cin >> arr[i][j];
      }
    }

//  assigning the max to the first element of the array
    max = arr[0][0];

//  check if the element is the diagonal element
//  if so compare it with the assigned max and finding the position
    for (int i = 0; i < size; i++) {
        if (arr[i][i] > max) {
            max = arr[i][i];
            row = i + 1; // Convert to 1-based index
            col = i + 1;
        }
    }

  cout << "Maximum element is: " << max << " with coordinates: " << row << ";" << col;
  return 0;
}
