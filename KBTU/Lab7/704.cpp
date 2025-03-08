//
// Created by Abenezer on 3/7/2025.
// Finding the Position of the maximum
#include <iostream>
using namespace std;

int main(){
    long long int size, pos, max_num;
    cin >> size;
    long long int arr[size];
    for(long long int i = 0; i < size; i++){
        cin >> arr[i];
    }
    max_num = arr[0];
    pos = 1;
    for(long long int i = 1; i < size; i++){
      if(arr[i] > max_num){
        max_num = arr[i];
        pos = i + 1;
      }
    }
    cout << pos;
    return 0;
}