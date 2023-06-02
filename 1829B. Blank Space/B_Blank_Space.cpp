#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n, curr, ans; 
    cin >> t;

    while (t--) {
        curr = ans = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                curr++;
            } else {
                ans = max(ans, curr);
                curr = 0;
            }
        }

        cout << max(ans, curr) << endl;
    }
}