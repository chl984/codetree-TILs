#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double i = 13, j = 0.165;

    cout.precision(0);

    cout << i << " * ";
    
    cout.precision(6);
    
    cout << j << " = " << i*j;

    return 0;
}