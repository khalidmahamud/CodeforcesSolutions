#include <bits/stdc++.h>
using namespace std;

int main() {
    long t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        long count = 0;

        if ((pow(2, k)) <= n) {
            count += pow(2, k);
        } else {
            count += n + 1;
        }
        
        cout << count << endl;

    }
}