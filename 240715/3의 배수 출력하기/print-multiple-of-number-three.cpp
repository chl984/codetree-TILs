#include <iostream>
using namespace std;

int main() {
    int i=1, n;
    cin >> n;
    while(i*3<=n){
        cout << i*3 << " ";
        i++;
    }
    return 0;
}