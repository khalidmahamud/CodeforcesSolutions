#include <iostream>
using namespace std;

int main() {
    int i, n, k, t = 0;

    while(cin >> n >> k) {
        for (i = 1; i <= n; i++)
        {
            t = t + (i * 5);

            if ((t + k) > 240) {
                break;
            }
        }
        cout << i - 1;
        break;
    }

}