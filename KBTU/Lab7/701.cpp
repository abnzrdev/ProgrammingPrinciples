//
// Created by Abenezer on 3/7/2025.
// Odd lover(Print all the odd elements from the array)
#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
      cin >> arr[i];
    }
    for (int i = 0; i < size; i++){
      if( arr[i] % 2 != 0){
        cout << arr[i] << " ";
      }
    }
    return 0;
}