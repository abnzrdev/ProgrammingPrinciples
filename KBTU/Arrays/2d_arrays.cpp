//
// Created by Abenezer on 3/14/2025.
// how to take input and output 2d arrays

#include <iostream>
using namespace std;

int main(){
    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}

