//
// Created by Abenezer on 3/18/2025.
// Don't wanna be perfect
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  //declaring the variables
  int size1 = 0, size2 = 0, sq1 = 0;
  cin >> size1 >> size2;
  int arr[size1][size2];

  //taking the array elements
  for(int i = 0; i < size1; i++){
    for(int j = 0; j < size2; j++){
      cin >> arr[i][j];
    }
  }

  //checking if the number is perfect
  // taking the square root of those numbers
  for(int i = 0; i < size1; i++){
    for(int j = 0; j < size2; j++){
      sq1 = sqrt(arr[i][j]);
      if(sq1 * sq1 == arr[i][j]){
        arr[i][j] = sq1;
      }
      else{
        arr[i][j] = arr[i][j];
      }
    }
  }

  //giving out the value of the array
  for(int i = 0; i < size1; i++){
    for(int j = 0; j < size2; j++){
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
