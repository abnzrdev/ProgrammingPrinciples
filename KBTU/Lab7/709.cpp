//
// Created by Abenezer on 3/11/2025.
// Remove Duplicates
#include <iostream>
using namespace std;

int main() {
    long long int size = 0;
    long long int new_size = 0;
    cin >> size;

    long long int arr[size];
    long long int unqarr[size]; // Max size needed, since worst case: all elements are unique

    for (long long int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (long long int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) { // Ensures first element is added, avoids out-of-bounds
            unqarr[new_size] = arr[i];
            new_size++;
        }
    }

    for (long long int i = 0; i < new_size; i++) {
        cout << unqarr[i] << " ";
    }

    return 0;
}

