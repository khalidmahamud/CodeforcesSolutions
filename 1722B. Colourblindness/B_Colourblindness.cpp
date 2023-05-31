#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        string r1, r2;
        cin >> r1 >> r2;
        for (int i = 0; i < n; i++) {
            if (r1[i] == 'B') {
                r1[i] = 'G';
            }
        }
        for (int i = 0; i < n; i++) {
            if (r2[i] == 'B') {
                r2[i] = 'G';
            }
        }

        if (r1 == r2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }
}