#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d, count = 0;

    while (cin >> k >> l >> m >> n >> d) {
        for (int i = 1; i <= d; i++)
        {
            if (i % k != 0) {
                if (i % l != 0) {
                    if (i % m != 0) {
                        if (i % n != 0) {
                            count++;
                        }
                    }
                }
            }
        }
        cout << d - count;
        return 0;
    }
}