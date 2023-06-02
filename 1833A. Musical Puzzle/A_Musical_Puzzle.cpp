#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s1;
    cin >> t;

    while (t--) {
        cin >> n >> s1;
        unordered_set<string> s2;

        for (int i = 0; i < n - 1; i++) {
            s2.insert(s1.substr(i, 2));
        }
        cout << s2.size() << endl;
    }
}