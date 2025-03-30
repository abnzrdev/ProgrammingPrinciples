//
// Created by Abenezer on 3/29/2025.
// Using switch statement to create currency converter system
// Three types of currencies used
#include <iostream>
using namespace std;

int main(){
  int cash;
  char cur;
  const double yen_to_usd = 0.0067;
  const double krn_to_usd = 0.09;
  const double yen_to_krn = 0.075;
  cin >> cash >> cur;

  switch(cur){
    case 'u':
      cout << "You have " << cash / yen_to_usd << "yen!" << endl
           << "You have " << cash / krn_to_usd << "krone!";
      break;
    case 'k':
        cout << "You have " << cash * krn_to_usd << "usd!" << endl
             << "You have " << cash / yen_to_krn << "yen!";
        break;
    case 'y':
        cout << "You have " << cash * yen_to_usd << "usd!" << endl
             << "You have " << cash * yen_to_krn << "krone!";
        break;
    default:
      cout << "I don't know this currency";
   }
}
