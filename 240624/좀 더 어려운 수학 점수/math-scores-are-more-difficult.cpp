#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a==c) a=b, c=d;
    if(a>c) cout << "A";
    else cout << "B";
    return 0;
}