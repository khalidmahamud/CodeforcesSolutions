#include <iostream>
#include <algorithm>
typedef unsigned long long ull;
using namespace std;


int main() {
    ull a, b, x, y, count = 0;
    cin >> a >> b >> x >> y;

    ull gcd = __gcd(x, y);

    x = x / gcd;
    y = y / gcd;

    count = min(a / x, b / y);

    cout << count;
}