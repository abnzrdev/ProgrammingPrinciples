//
// Created by Abenezer on 3/2/2025.
// Checking perfect square
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int val1, org;
    double sqrtd;
    cin >> val1;
    org = sqrt(val1);
    sqrtd = sqrt(val1);
    if (org == sqrtd){
      cout << "Yes";
    }
    else{
      cout << "No";
    }
    return 0;
}
