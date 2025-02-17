//
// Created by Abenezer on 2/16/2025.
// Triangle inequality
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c; // Read the three sides

    // Check triangle inequality conditions
    if (a + b > c && b + c > a && c + a > b) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
