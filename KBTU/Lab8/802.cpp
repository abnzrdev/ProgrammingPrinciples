//
// Created by Abenezer on 3/15/2025.
// Finding the position of the maximum element in 2d array
#include <iostream>
using namespace std;

int main(){

//declaring the variables
    int size = 0, pos1 = 1, pos2 = 1;
    cin >> size;
    int arr[size][size];

    // getting the array elements
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> arr[i][j];
        }
    }

   int max = arr[0][0];

    for(int i = 1; i < size; i++){
      for(int j = 1;j < size; j++){
        if(max < arr[i][j]){
            max = arr[i][j];
            pos1 = i + 1;
            pos2 = j + 1;
        }
      }
    }

    cout << pos1 << " " << pos2;

    return 0;

}