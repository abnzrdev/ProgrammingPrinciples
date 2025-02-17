//
// Created by Abenezer on 2/17/2025.
// Attendance checker
#include <iostream>
using namespace std;

int main(){
  int cls, atdnc;
  cin >> cls >> atdnc;
  if(((atdnc * 100) / cls) >= 80){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
}
