//
// Created by Abenezer on 3/22/2025.
// Capital even
#include <iostream>
using namespace std;

int main(){
  string str = "";
  string cap_evn = "";
  cin >> str;
  int len = str.length();

  for(int i = 0; i < len; i++){
    if(i % 2 == 0){
      if((int(str[i]) >= 97) && (int(str[i]) <= 122)){
        cap_evn += char(int(str[i] - 32));
      }
      else{
        cap_evn += str[i];
      }
    }
    else{
      cap_evn += str[i];
    }
  }
  cout << cap_evn;
  return 0;
}
