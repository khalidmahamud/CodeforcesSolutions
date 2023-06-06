#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, ans, count;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> a(n), b(n);
        map<int, int> c1, c2;
        ans = 1, count = 1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                count++;
            }
            else {
                c1[a[i - 1]] = max(c1[a[i - 1]], count);
                count = 1;
            }
        }
        c1[a[n - 1]] = max(c1[a[n - 1]], count);
 
        count = 1;
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                count++;
            }
            else {
                c2[b[i - 1]] = max(c2[b[i - 1]], count);
                count = 1;
            }
        }
        c2[b[n - 1]] = max(c2[b[n - 1]], count);
        

        for (auto [v, val] : c1) {
            ans = (int)max(ans, c1[v] + c2[v]);
        }
        for (auto [v, val] : c2) {
            ans = (int)max(ans, c1[v] + c2[v]);
        }

        cout << ans << endl;

    }
}
