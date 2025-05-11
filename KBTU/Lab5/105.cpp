//
// Created by Abenezer on 4/28/2025.
// Counting the bits

#include <iostream>

int main(){
    int num = 0;
    std::cin >> num;

    // Counting the 1s in the number
    int count = 0;
    for(int i = 0; i < 8; i++){
       if(num & 1){
            count++;
        }
        num >>= 1;
    }
    std::cout << (count);
    return 0;
}