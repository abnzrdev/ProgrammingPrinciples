//
// Created by Abenezer on 3/16/2025.
// Second diagonal sum

#include <iostream>
using namespace std;

int main(){

    //declaring the variables
    int size = 0, sum = 0;
    cin >> size;
    int arr[size][size];

    // getting the array elements
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> arr[i][j];
        }
    }

    // Short listing the elements of the diagonal
    // Then adding them together
    for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
        if(i + j == size - 1){
          sum += arr[i][j];
        }
      }
    }

    cout << sum;
    return 0;
}
