#include <iostream>
using namespace std;

int main() {
    int n, teams = 0;

    while (cin >> n) {
        for (int i = 1; i < n; i++) {
            if ((n - i) % i == 0) {
                teams++;
            }
        }
        cout << teams;
        return 0;
    }
}