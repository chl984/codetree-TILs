#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    int d, e, f, i;
    cin >> a >> d >> b >> e >> c >> f;
    if(a=='Y'&&d>=37) i++;
    if(b=='Y'&&e>=37) i++;
    if(c=='Y'&&f>=37) i++;
    if(i>=2) cout << "E";
    else cout << "N";
    return 0;
}