#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        long long a[n], b[n], ans[n];
        vector<pair<long, long>> indices;
        for (long i = 0; i < n; ++i) {
            cin >> a[i];
            indices.push_back(make_pair(a[i], i));
        }
        for (long i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(indices.begin(), indices.end());
        sort(b , b + n);

        for (long i = 0; i < n; i++) {
            ans[indices[i].second] = b[i];
        }

        for (long i = 0; i < n; i++) {
            cout << ans[i] << " "; 
        }
        cout << endl;
    }
}
