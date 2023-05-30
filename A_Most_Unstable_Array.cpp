#include <iostream>
using namespace std;

int main() {
    int t, n, m, i, sum;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        int a[n];
        i = 0, sum = 0;

        while (sum <= m) {
            a[i] = i;
            sum += a[i];
            i++;
        }
    }
}