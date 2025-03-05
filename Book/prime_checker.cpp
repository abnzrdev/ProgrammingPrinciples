//
// Created by Abenezer on 3/2/2025.
// Prime Checker
#include <iostream>

using namespace std;

int is_prime(){
    int val1,rem;
    cin >> val1;
    for(int i = val1 - 1; i > 1; i--){
        rem = val1 % i;
        if(rem == 0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}

int main(){
    is_prime();
    return 0;
}