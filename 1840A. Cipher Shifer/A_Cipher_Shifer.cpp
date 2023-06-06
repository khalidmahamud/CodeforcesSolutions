#include <iostream>
using namespace std;

int main() {
    int t, n, j;
    string s, a;
    cin >> t;

    while (t--) {
        cin >> n >> s;
        a = s[0];
        j = 0;

        for (int i = 1; i < n - 1; i++) {
            if (s[i] == a[j]) {
                j++;
                a += s[i + 1];
                i++; 
            }
        }

        cout << a << endl;
    }
}