//
// Created by Abenezer on 4/28/2025.
/*
Logical error example
*/

#include <iostream>
#include <vector>

int main(){
    std::vector<double> temps;

    for(double temp; std::cin >> temp;){
            temps.push_back(temp);
    }

    double sum = 0;
    double high_temp = 57;
    double low_temp = -111;

    for(double x : temps){
        if(x > high_temp) high_temp = x;
        if(x < low_temp) low_temp = x;
        sum += x;
    }

    std::cout << "High Temprature : " << high_temp << '\n';
    std::cout << "Low Temprature : " << low_temp << '\n';
    std::cout << "Average Temprature : " << sum/temps.size() << '\n';
}