//
// Created by Abenezer on 4/5/2025.
// Finding the real median
// Median is the number in a sequence(may be not in the sequence) but the amount of numbers before and after the median have to be equal

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  // Declaring variables
  vector<double> temps;
  double median = 0;

  // Taking input and storing them
  for(double temp;cin >> temp;){
    temps.push_back(temp);
  }

  int size = temps.size();
  sort(temps.begin(), temps.end());    // sorting to calculate the median

  size % 2 != 0 ? median = temps[size / 2] : median = (temps[size / 2] + temps[(size / 2) - 1]) / 2;
  cout << "The median is : " << median << "\n";
}

