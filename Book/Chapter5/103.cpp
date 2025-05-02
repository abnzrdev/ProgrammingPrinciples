//
// Created by Abenezer on 4/29/2025.
// Pre and post conditions of error formatting

#include <iostream>
#include <string>

void error(std::string err_str){
    throw std::runtime_error(err_str);
}

int area(int length, int width){
    //calculate the area of triangle
    //pre-conditions (both the length and the width have to be positive)
    //post-conditions (the area has to be positive)

   if(length <= 0 || width <= 0){
        error("area() pre-condition");
    }
    int area = length * width;
    if(area <= 0){
        error("area() post-condition");
    }
    return area;
}

int main(){
    std::cout << area(10, 2);
}
