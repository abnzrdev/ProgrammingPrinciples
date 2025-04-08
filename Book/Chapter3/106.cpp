//
// Created by Abenezer on 4/5/2025.
// character and its integer value
#include <iostream>
using namespace std;

int main(){
    // Declaring Variables and taking inputs
    string inp = "";
    cout << "Write your string : ";
    cin >> inp;

    // Iterate through character and show the integer values of it
    for(int i = 0; i < inp.size(); i++){
      cout << inp[i] << "\t" << int(inp[i]) << "\n";
    }

    return 0;
}
