//
// Created by Abenezer on 3/22/2025.
// Copy and Paste
#include <iostream>
using namespace std;

int main(){

//  declaring variables
  string sub = "";
  string str = "";
  cin >> sub >>str;
  int sub_len = sub.length();
  int str_len = str.length();
  int quot = str_len / sub_len;
  int rem = str_len % sub_len;
  int ind = 0;

//  checking the condition
  if(rem == 0){
    for(int i = 0; i < quot; i++){
      if(sub != str.substr(ind,sub_len)){
        cout << "NO";
		return 0;
      }
      else{
        ind += sub_len;
      }
    }
    cout << "YES";
  }
  else{
    cout << "NO";
  }
  return 0;
}
