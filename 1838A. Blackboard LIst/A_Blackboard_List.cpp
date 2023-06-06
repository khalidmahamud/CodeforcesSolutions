#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a + n);

        ll min = a[0];
        ll max = a[n - 1];

        if (min < 0) {
            cout << min << endl;
        } else {
            cout << max << endl;
        }
    }
}