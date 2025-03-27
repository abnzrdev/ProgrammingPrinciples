//
// Created by Abenezer on 3/21/2025.
// Change to Upper Case
#include <iostream>
using namespace std;

int main(){
  char inp = 'a';
  cin >> inp;
  if(int(inp) < 97){
    cout << inp;
  }
  else{
    cout << char(int(inp) - 32);  // double typecasting and change the ascii code
  }
  return 0;
}
