#include <iostream>
using namespace std;

int main() {
    int t, n, max = 1;
    cin >> t;

    while (t--) {
        cin >> n;

        if (n % 2 == 0) {
            max = n / 2;
        } else {
            max = (n - 1) / 2;
        }
        cout << max << endl;
    }
}