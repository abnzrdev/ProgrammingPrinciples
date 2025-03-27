//
// Created by Abenezer on 3/24/2025.
// From DEC to HEX
#include <iostream>
using namespace std;

int main(){
  int dec = 0;
  cin >> dec;
  string hex = "";
  int rem = 0;

  while(dec > 0){
    rem = dec % 16;
    if(rem > 9){
      hex += char(64 + (rem - 9));
    }
    else{
      hex += to_string(rem);
    }
    dec = dec / 16;
  }

  for(int i = hex.length() - 1; i >= 0; i--){
    cout << hex[i];
  }

  return 0;
}
