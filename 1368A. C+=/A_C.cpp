#include <iostream>
using namespace std;

int main() {
    int t, a, b, n, operation;
    cin >> t;
    
    while (t--) {
        cin >> a >> b >> n;
        operation = 0;
        while (a <= n && b <= n) {
            if (a <= b) {
                a += b;
                operation++;
            } else {
                b += a;
                operation++;
            }
        }
        cout << operation << endl; 
    }
}