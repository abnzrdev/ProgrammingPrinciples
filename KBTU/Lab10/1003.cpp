// TO BE WRITTEN AGAIN
// Created by Abenezer on 4/27/2025.
/*
Sorting Euclidean planes
*/
#include <iostream>
#include <vector>
#include <algorithm>

// Writing the struct
struct Points{
    int size;
    std::vector<std::pair<int, int>> eucld;
};

bool compare(int a, int b, int c, int d){
    return a < b;
    if(a == b){
        return c < d;
    }
}

int main(){

    // Declaring the variable of the struct
    Points point;

    // Getting the size
    int size = point.size;
    std::cin >> size;

    // Getting the inputs of the size
    for(int i = 0; i < size; i++){
        int num1 = point.eucld.first;
        int num2 = point.eucld.second;
        std::cin >> num1 >> num2;
    }

    std::sort(point.eucld.begin(), point.eucld.end(), compare);

    for(int i = 0; i < size; i++){
        std::cout << point.eucld.first << " " << point.eucld.second;
    }
}
