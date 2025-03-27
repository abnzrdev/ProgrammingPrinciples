//
// Created by Abenezer on 3/22/2025.
// is it possible to be palindrome
#include <iostream>
using namespace std;

int main(){
    //  declaring variables
    string str = "";
    string str_rev = "";
    string add_str = "";
    string add_str_rev = "";

    cin >> str;
    int len = str.length();

    // reversing the string
    for(int i = len - 1; i >= 0; i--){
        str_rev += str[i];
    }

    // adding the last character
    add_str_rev = str[0] + str_rev;
    add_str = str + str[0];

    //  checking palindromity of the added string
    if(add_str == add_str_rev){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}