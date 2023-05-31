#include <iostream>
using namespace std;

int main() {
    int t, l, r, x, y;
    cin >> t;

    while (t--) {
        cin >> l >> r;
        x = -1, y = -1;

        if (l * 2 <= r) {
            x = l;
            y = l * 2;
        }

        cout << x << " " << y << endl;
    }
}