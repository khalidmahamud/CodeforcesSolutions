#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll t, n, k, ans;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll pre_sum[n + 1];
        pre_sum[0] = 0;
        for (ll i = 0; i < n; i++) {
            pre_sum[i + 1] = pre_sum[i] + a[i];
        } 

        ans = 0;
        for (ll i = 0; i <= k; i++) {
            ans = max(ans, pre_sum[n - i] - pre_sum[2 * (k - i)]);
        }

        cout << ans << endl;
        a.clear();
    }
}