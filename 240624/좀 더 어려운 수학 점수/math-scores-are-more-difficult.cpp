#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a==b) a=c, b=d;
    if(a>b) cout << "A";
    else cout << "B";
    return 0;
}