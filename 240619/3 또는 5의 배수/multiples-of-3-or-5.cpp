#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a%3==0) cout << "YES";
    else cout << "NO";
    if(a%5==0) cout << endl << "YES";
    else cout << endl << "NO";
    return 0;
}