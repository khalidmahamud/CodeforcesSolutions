#include <bits/stdc++.h>
using namespace std;

int main() {
    long long q;
    
    vector<long long> divisor;
    cin >> q;
    for (int i = 2; i <= sqrt(q) && q > 1;) {
        if (q % i == 0) {
            divisor.push_back(i);
            q /= i;
            continue;
        }
        i++;
    }
    if (q > 1) {
        divisor.push_back(q);
        if (divisor.size() < 2) {
            cout << 1 << endl;
            cout << 0;
        }
        else if (divisor.size() == 2) {
            cout << 2;
        } else {
            cout << 1 << endl;
            cout << divisor[0] * divisor[1];
        }
    } else {
        cout << 1 << endl;
        cout << 0;
    }
}