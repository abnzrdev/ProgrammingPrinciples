//
// Created by Abenezer on 3/7/2025.
// Finding the Position of the maximum
#include <iostream>
using namespace std;

int main(){
    int size, pos, max_num;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    max_num = arr[0];
    pos = 1;
    for(int i = 1; i < size; i++){
      max_num = arr[i];
      pos++;
      return pos;
    }
    cout << pos;
    return 0;
}