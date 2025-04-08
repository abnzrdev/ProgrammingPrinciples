//
// Created by Abenezer on 4/5/2025.
// Distance between cities

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // Declaring Varibales
    vector<double> dists;
    double sum = 0;

    for(double dist; cin >> dist;){
      dists.push_back(dist);
      sum += dist;
    }

    int size = dists.size();
    double mean = sum / size;
    sort(dists.begin(), dists.end());
    cout << "The smallest distance is : " << dists[0] << endl
         << "The largest distance is : " << dists[size - 1] << endl
         << "The mean distance is : " << mean << endl
         << "The sum of the distance is : " << sum << endl;

    return 0;
}
