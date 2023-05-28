#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n, ballons;
    char current;
    cin >> t;

    while (t--) {
        ballons = 0;
        current = '\0';
        cin >> n;
        char c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        sort(c, c + n);

        for (int i = 0; i < n; i++) {
            if (current != c[i]) {
                ballons += 2;
                current = c[i];
            } else {
                ballons += 1;
            }
        }
        cout << ballons << endl;
    }
}