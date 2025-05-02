//
// Created by Abenezer on 5/2/2025.
// Giving error
// The caller deals with the error
// We use this most of the time when there is an error in a function that we can;t change
// Kind of libraries that we can;t change
//

#include "std_lib_facilities.h"

int area(int length, int width){
    return length * width;
}

int framed_area(int x, int y){
    return area(x - 2,y - 2);
}

int main(){
    int x = 0;
    int y = 0;
    int z = 0;

    cout << "Enter the Value of for x,y,z : ";
    cin >> x >> y >> z;

    if(x < 0 || y < 0) error("Bad Argument for the area!!");

    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3;

    cout << area1 << '\t' << area2 << '\t' << area3 << '\t' << ratio;
}
