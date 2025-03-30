//
// Created by Abenezer on 2/26/2025.
// Currency converter
#include <iostream>
using namespace std;

int main(){
  const double yen_to_usd = 0.0067;
  const double krn_to_usd = 0.09;
  const double yen_to_krn = 0.075;
  char currency = ' ';
  double cash;

  cout << "Enter the amount of cash you have with the currency you hold(u = usd , y = yen , k = krone) : ";
  cin >>  cash >> currency;

  if(currency == 'u'){
    cout <<  "You have " << cash / yen_to_usd << "yen" << endl
         << "Your balance is " << cash / krn_to_usd << "krn!";
  }
  else if(currency == 'k'){
    cout <<  "You have " << cash / yen_to_krn << "yen" << endl
         << "Your balance is " << cash * krn_to_usd << " usd!";
  }
  else if (currency == 'y'){
      cout <<  "You have " << cash * yen_to_usd << "usd" << endl
           << "Your balance is " << cash * yen_to_krn << "krn!";
  }
  else{
    cout << " I don't know the currency";
  }
  return 0;
}