#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int temp = c;
    b = a, c = b, a = c;
    cout << a << endl << b << endl << c;
    return 0;
}