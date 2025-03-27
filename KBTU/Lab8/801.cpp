//
// Created by Abenezer on 3/14/2025.
// Find the negative numbers of the array....
#include <iostream>
using namespace std;

int main(){

//  declaring the variables
  int row = 0, column = 0, counter = 0;
  cin >> row >> column;
  int arr[row][column];

// getting the array elements
  for(int i = 0; i < row; i++){
    for(int j = 0; j < column; j++){
      cin >> arr[i][j];

//      checking if the numbers are negative
      if(arr[i][j] < 0){
        counter++;
      }
    }
  }

  cout << counter;
  return 0;
}

