//
// Created by Abenezer on 3/17/2025.
// Transpose matrix
#include <iostream>
using namespace std;

int main(){

    //declaring the variables
    int size;
    cin >> size >> size;
    int arr[size][size];

    //taking the array indexes
    for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
        cin >> arr[i][j];
      }
    }

    // Transposing and giving the output
    for(int j = 0; j < size; j++){
      for(int i = 0; i < size; i++){
        cout << arr[i][j] << ' ';
      }
      cout << endl;
    }

    return 0;
}