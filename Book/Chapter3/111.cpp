//
// Created by Abenezer on 4/7/2025.
// Spelled out number to digits and vice versa
#include <iostream>
#include <vector>
using namespace std;

int main(){
  // Declaration of the vector
  vector<string> splld_out = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
  vector<int> digit = {0,1,2,3,4,5,6,7,8,9};

  //Taking inputs
  cout << "Which input do you have(Write \"d\" for digit or \"s\" for spelled out) : ";
  char typ_of_inp = ' ';
  cin >> typ_of_inp;

  if(typ_of_inp == 'd'){
    cout << "Which number do you want to take : ";
    int num = 0;
    cin >> num;

    //Giving the spelled out value
    cout << splld_out[num] << endl;
  }
  else if(typ_of_inp == 's'){
    cout << "What is the spelled out value(🔴Make sure the first letter is capital) : ";
    string inp = " ";
    cin >> inp;

    //Giving the digit value
    for(int i = 0; i < splld_out.size(); i++){
      if(inp == splld_out[i]){
        cout << digit[i] << endl;
      }
    }
  }




  return 0;
}
