#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    long long totalRabbits = n;  // Rabbits met on day 1

    for (int i = 2; i <= d; ++i) {
        totalRabbits += n * (2 * i);  // Rabbits met on day i
    }

    cout << totalRabbits << endl;  // Output the total number of rabbits
    return 0;
}