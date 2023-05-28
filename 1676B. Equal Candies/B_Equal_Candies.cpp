#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n, eat;
    cin >> t;

    while (t--) {
        eat = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        sort(a, a + n);

        for (int i = 1; i < n; i++) {
            eat += (a[i] - a[0]);
        }

        cout << eat << endl;
    }
}