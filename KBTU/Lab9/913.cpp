//
// Created by Abenezer on 3/24/2025.
// Remove vowels from the string
#include <iostream>
using namespace std;

int main() {
  // Declaration of variables
  string str = "";
  string str_wtht_vwl = "";
  getline(cin, str);
  int len = str.length();

  // Iterate through the string
  for (int i = 0; i < len; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
        str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
      str_wtht_vwl += str[i];
        }
  }

  // Print out the result
  cout << str_wtht_vwl;
  return 0;
}
