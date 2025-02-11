#include <iostream>
int main(){
    int a, b;
    std::cin >> a >> b;
    int c = b % 10;
    int d = (((b - c) / 100) % 10);
    std::cout << a + c + d;
    return 0;
}