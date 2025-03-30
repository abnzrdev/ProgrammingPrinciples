//
// Created by Abenezer on 3/25/2025.
// Digital clock
#include <iostream>
using namespace std;

int main() {
    // Declaring variables and taking the input as seconds
    int sec = 0;
    cin >> sec;
    int hr = 0;
    int min = 0;

    // Changing the seconds to hours, minutes, and seconds
    hr = (sec / 3600) % 24; // Convert to hours and ensure it wraps around 24 hours
    min = (sec / 60) % 60; // Convert remaining seconds to minutes
    sec = sec % 60; // Remaining seconds

    // Output the result in digital clock format
    cout << (hr < 10 ? "0" : "") << hr << ":"
         << (min < 10 ? "0" : "") << min << ":"
         << (sec < 10 ? "0" : "") << sec << endl;

    return 0;
}
