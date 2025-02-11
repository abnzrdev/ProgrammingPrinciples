//
// Created by Abenezer on 2/11/2025.
//
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int hh = (n / 3600) % 24;
    int mm = (n / 60) % 60;
    int ss = n % 60;
    std::cout << hh/10 << hh%10 << ":" << mm/10 << mm%10 << ":" << ss/10 << ss%10;
    return 0;
}