#include <iostream>
using namespace std;

int main() {
    long t, n, index_n, index1, index2;
    cin >> t;

    while (t--) {
        cin >> n;
        long p[n];
        index1 = 0; index2 = 0;
        for (long i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] == n) {
                index_n = i;
            }
            if (p[i] == 1) {
                index1 = i;
            }
            if (p[i] == 2) {
                index2 = i;
            }
        }

        if (index_n > min(index1, index2) && index_n < max(index1, index2)) {
            cout << index1 + 1 << ' ' << index2 + 1 << endl;
        }
        else if (index_n < min(index1, index2)) {
            cout << index_n + 1 << ' ' << min(index1, index2) + 1 << endl;
        }
        else if (index_n > max(index1, index2)) {
            cout << index_n + 1 << ' ' << max(index1, index2) + 1 << endl;
        }
    }
}