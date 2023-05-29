#include <iostream>
using namespace std;

int main() {
    int t, n, mCandies, bCandies;
    cin >> t;

    while (t--) {
        mCandies = 0, bCandies = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                mCandies += a[i];
            } else {
                bCandies += a[i];
            }
        }

        if (mCandies > bCandies) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }    
    }
}