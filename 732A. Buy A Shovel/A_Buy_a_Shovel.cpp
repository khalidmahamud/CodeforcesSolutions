#include <iostream>
using namespace std;

int main() {
    int k, r;

    while (cin >> k >> r) {
        for (int i = 1; i < 100; i++)
        {
            if ((k * i) % 10 == 0) {
                cout << i;
                break;
            }
            else if (((k * i) - r) % 10 == 0) {
                cout << i;
                break;
            }
        }   
        return 0;
    }
}