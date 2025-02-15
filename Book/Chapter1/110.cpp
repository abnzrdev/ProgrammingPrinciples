//
// Created by Abenezer on 2/15/2025.
// finding the max and min of the number using mathematical operations
#include <iostream>
using namespace std;

int main(){
    int val1 = 0;
    int val2 = 0;
    cin >> val1 >> val2;
    cout << "The max value is " << (val1 > val2) * val1 + (val1 < val2) * val2;
    return 0;
}