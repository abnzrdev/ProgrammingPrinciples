//
// Created by Abenezer on 2/7/2025.
//
#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << a << " " << b;
    return 0;
}