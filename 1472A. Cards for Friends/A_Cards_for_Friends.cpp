#include <iostream>
using namespace std;

int main() {
    int t, w, h, n;
    cin >> t;

    while (t--) {
        cin >> w >> h >> n;
        int count = 1;

        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        
        while (w % 2 == 0) {
            w /= 2;
            count *= 2;
        }
        while (h % 2 == 0) {
            h /= 2;
            count *= 2;
        }

        if (count >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}