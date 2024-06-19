#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double temp = a;
    a = b, b = temp;
    cout << a << " " << b;
    return 0;
}