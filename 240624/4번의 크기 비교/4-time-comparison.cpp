#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if(a>b) cout << 1;
    else cout << 0;
    if(a>c) cout << endl << 1;
    else cout << endl << 0;
    if(a>d) cout << endl << 1;
    else cout << endl << 0;
    if(a>e) cout << endl << 1;
    else cout << endl << 0;
    return 0;
}