//
// Created by Abenezer on 2/17/2025.
// Stipend checker based on marks 🥲
#include <iostream>
using namespace std;

int main(){
    int mid,end,final;
    cin >> mid >> end >> final;
    if ((mid + end + final >= 70) && (mid + end >= 30) && (final >= 20)){
        cout << "YES!";
    }
    else {
        cout << "NO.";
    }
    return 0;
}
