//
// Created by Abenezer on 3/18/2025.
// Fill with the maximum number
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // Declaring the variables
    int size = 0;
    cin >> size;
    int arr[size][size];

    // Taking the array values
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    // Replacing each row with the maximum value of that row
    for (int i = 0; i < size; i++) {
        int max = arr[i][0];
        for (int j = 1; j < size; j++) {
            max = std::max(max, arr[i][j]);
        }
        for (int j = 0; j < size; j++) {
            arr[i][j] = max;
        }
    }

    // Printing the modified array
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

