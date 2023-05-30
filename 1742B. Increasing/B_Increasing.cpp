#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n, i;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];
        int flag = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                flag = 0;
                break;
            }
        }
        
        if (flag == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}