//
// Created by Abenezer on 6/6/2025.
/***
It's pretty straightforward. Your goal is to create a function that removes the first and last characters
of a string. You're given one parameter, the original string. You don't have to worry about strings
with less than two characters.
***/
#include <iostream>
#include <string>

std::string slcd_string(std::string str){
    std::string slcd_str = "";
    for(int i = 0; i < str.length(); i++){
        if(i != 0 && i != str.length() - 1){
            slcd_str.push_back(str[i]);
        }
    }
    return slcd_str;
}

int main(){
    std::cout << slcd_string("hello");
}
