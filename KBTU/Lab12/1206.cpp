//
// Created by Abenezer on 4/22/2025.
/*
Finding the unique names in the list
*/

#include <iostream>
#include <set>
#include <string>

int main(){
    //Declaring variables and taking inputs
    int size = 0;
    std::cin >> size;
    std::set<std::string> names;


    //Inserting the individual name to the set
    for(int i = 0; i < size; i++){
        std::string name = "";
        std::cin >> name;
        names.insert(name);
    }

    std::cout << names.size(); // Finding the size of the set

    return 0;
}