#include <iostream>
using namespace std;

int main() {
    int n, p, v, t;
    int problem = 0;
    cin >> n;

    while(n--) {
        cin >> p >> v >> t;

        if((p + v + t) >= 2) {
            problem++;
        }
    }
    cout << problem;
}