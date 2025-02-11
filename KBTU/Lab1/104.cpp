//
// Created by Abenezer on 1/24/2025.
//
#include <iostream>
int main() {
    int a;
    std::cin >> a;
    int c = a % 10;
    int e = (((a - c) / 100) % 10);
    std::cout << e << " " << c;
}