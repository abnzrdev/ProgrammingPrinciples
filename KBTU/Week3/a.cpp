//
// Created by Abenezer on 1/30/2025.
//
#include <iostream>

int main() {
    // arthimetic operators and logical operators

    std::cout << 1 + 1 << std::endl;
    std::cout << 'A' + 'W' << std::endl; // Uses the ascii code of the letters
   // std::cout << 1 / 0 << std::endl;  // This will create logical error that will create undefined behaviour the code will still run
                                        // but there is an error still(the error known as zero divison error

    // we can only use modulus function for integer numbers
    //std::cout << 1.5 % 2.1 << std::endl;

    int a,b,c;
    std::cin >> a >> b >> c;

    std::cout << (a < c) && (b < c);
}