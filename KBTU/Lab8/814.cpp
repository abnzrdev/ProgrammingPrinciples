//
// Created by Abenezer on 3/14/2025.
// Are you cool or no
#include <iostream>
using namespace std;

int main(){

	//  Declaring variables
  int row = 0, col = 0;
  cin >> row >> col;
  int arr[row][col];

	//	taking the array
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cin >> arr[i][j];
    }
  }

	//  condition setting
  bool is_cool = true;
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if((i == j && i == j + 1 && i == j + 2) || (i == j && i == j + 1 && j == i + 1 && j == i + 2) || (j == i + 1 && i == j && i == j + 2 && i == j + 1)){
        if(arr[i][j] == 0){
          is_cool = false;
        }
      }
    }
  }

	// Giving the output
    if(is_cool){
      cout << "YES";
    }
    else{
      cout << "NO";
    }

    return 0;
}