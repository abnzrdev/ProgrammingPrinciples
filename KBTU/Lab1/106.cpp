//
// Created by Abenezer on 1/25/2025.
//
#include <iostream>
int main() {
    int d;
    std::cin >> d;
    int h = (d * 30) % 180;
    std::cout << h;
    return 0;
}