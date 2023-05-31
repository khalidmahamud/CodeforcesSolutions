#include <iostream>
using namespace std;

int main() {
    int t, n, i, count;
    string s;
    cin >> t;

    while (t--) {
         cin >> n >> s;
        i = 0, count = 0;

        while (i != n / 2) {
            if (s[i] != s[n - 1 - i]) {
                count += 2;
            } else {
                break;
            }
            i++;
        }

        cout << n - count << endl;  
    }   
}