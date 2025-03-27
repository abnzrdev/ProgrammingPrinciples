//
// Created by Abenezer on 3/22/2025.
// Character checking
#include <iostream>
using namespace std;

int main(){
//  declaring variables
  string inp = " ";
  char chr = 'a';
  int freq = 1;
  int cntr = 0;
  string chckr = " ";

// taking inputs and getting the length of the string
  cin >> inp >> chr >> freq;
  int len = inp.length();

// counting the number of occurences
  for(int i = 0; i < len; i++){
    if(inp[i] == chr){
      cntr++;
    }
  }

//  checking if the number of occurences and frequency are equal
  if(cntr == freq){
    cout << "YES";
  }
  else{
    cout << "NO";
  }

  return 0;
}
