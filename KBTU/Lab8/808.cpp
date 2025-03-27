//
// Created by Abenezer on 3/17/2025.
// Perfect Matrix
#include <iostream>
using namespace std;

int main(){

    //declaring the variables
    int size = 0, i = 0, j = 0;
    cin >> size;
    int arr[size][size];

    // getting the array elements
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> arr[i][j];
        }
    }

    // check if the matrix is perfect
    while(i < size && j < size){
      if(i - j == -(j - i)){
        if(arr[i - j] != arr[-(j - i)]){
          cout << "Not perfect.";
          break;
        }
        else{
          cout << "Perfect.";
          break;
        }
      }
      i++;
      j++;
    }

    return 0;
}
