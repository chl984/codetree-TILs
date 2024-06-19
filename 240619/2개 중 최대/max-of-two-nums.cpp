#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = (a>b) ? a : b;
    cout << x;
    return 0;
}