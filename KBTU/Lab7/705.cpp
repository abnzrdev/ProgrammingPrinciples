//
// Created by Abenezer on 3/8/2025.
// Maximum to minimum converter
#include <iostream>
using namespace std;

int main(){
  long long int size,max_num, min_num, max_pos, min_pos;
  cin >> size;
  long long int arr[size];

  for(long long i = 0; i < size; i++){
    cin >> arr[i];
  }

  max_num = arr[0];
  min_num = arr[0];
  max_pos = 1;
  min_pos = 1;


  for(long long int i = 1; i < size; i++){
    if(arr[i] > max_num){
      max_num = arr[i];
      max_pos = i + 1;
    }
    if(arr[i] < min_num){
      min_num = arr[i];
      min_pos = i + 1;
    }
  }

  for(long long int i = 0; i < size; i++){
    if(arr[i] == max_num){
      arr[i] = arr[min_pos - 1];
    }
  }


  for(long long int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
