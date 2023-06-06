#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a; 
    long long b, ans;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<long long> lamp[n];
        ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            lamp[a - 1].push_back(b);
        }


        for (int i = n - 1; i >= 0; i--) {
            sort(lamp[i].begin(), lamp[i].end());
            reverse(lamp[i].begin(), lamp[i].end());
            for (int j = 0; j < min(i + 1, (int)lamp[i].size()); j++) {
                ans += lamp[i][j];
            }
        } 

        cout << ans << endl;
    }
}