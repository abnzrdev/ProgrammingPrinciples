//
// Created by Abenezer on 4/27/2025.
/*
Sorting using cpp
*/

#include <iostream>
#include <algorithm>
#include <vector>


// Writing the struct
struct Vector{
    int n;
    std::vector<int> nums;
};

// Writing custom comparator
bool compare(int a, int b){
    if(a % 2 == 0 && b % 2 == 0){
        return b < a;
    }
    if(a % 2 != 0 && b % 2 != 0){
        return a < b;
    }
    return a % 2 == 0;
}

int main(){
    // Declaring the variable
    Vector vec;

    // Taking integer input and the vector part of the input
    int size = vec.n;
    std::cin >> size;


    // Taking the vector inputs
    for(int i = 0; i < size; i++){
        int num = 0;
        std::cin >> num;
        vec.nums.push_back(num);
    }

    std::sort(vec.nums.begin(), vec.nums.end(), compare);    // Sorting the vector

    // Giving back the output
    for(int i = 0; i < size; i++){
        std::cout << vec.nums[i];
    }

    return 0;
}