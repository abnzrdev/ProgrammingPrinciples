//
// Created by Abenezer on 5/2/2025.
// Giving an error
// The callee(the function that is getting called) deals with the error
// This makes it easier for doing a large program if we can change the function.
// Makes the code more easier and readable but it may has some problems on efficiency cause it is doing the check every time it is called
// but it is rather need to be negligble to avoid the unnecessary headache that will happen if the error happens
//

#include "std_lib_facilities.h"

int area(int length, int width){
    // Finding the area
    if(length <= 0 || width <= 0) error("Bad argument for the area");
    return length * width;
}

int framed_area(int length, int width){
    // Finding the framed area
    constexpr int frame = 2;
    if(length - frame <= 0 || width - frame <= 0) error("Bad argument for the framed area");
    return length * width;
}

int main(){
    // Taking inputs
    int x, y;
    cin >> x >> y;

    int area1 = area(x,y);
    int area2 = framed_area(x,y);
    cout << area1 << area2;
    return 0;
}