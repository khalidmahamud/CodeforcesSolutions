#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long t, n, k, q;
    cin >> t;
    
    while (t--) {
        cin >> n >> k >> q;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
    
        long long count = 0;
        long long consecutiveDays = 0;
    
        for (long long i = 0; i < n; i++) {
            if (a[i] <= q) {
                consecutiveDays++;
            } else {
                consecutiveDays = 0;
            }
    
            if (consecutiveDays >= k) {
                count += consecutiveDays - k + 1;
            }
        }
    
        cout << count << endl;
    }

    return 0;
}
