#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t, p;
    cin >> s >> t;
    p = s, s = t, t = p;
    cout << s << endl << t;
    return 0;
}