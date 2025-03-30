//
// Created by Abenezer on 3/30/2025.
// Character to ascii code loop
#include <iostream>
using namespace std;

int main(){
  int start = int('a');
  int last = int('z');

  while(start <= last){
    cout << char(start) << "\t" << start << endl;
    start++;
  }
}
