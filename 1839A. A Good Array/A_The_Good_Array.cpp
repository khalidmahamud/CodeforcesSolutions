#include <iostream>
using namespace std;

int main () {
    int t, n, k, min;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        min = 0;
        
        if ((n - 1) % k != 0) {
            min = ((n - 1) / k) + 2;
            cout << min << endl;
        } else {
            min = ((n - 1) / k) + 1;
            cout << min << endl;
        }
    }
}