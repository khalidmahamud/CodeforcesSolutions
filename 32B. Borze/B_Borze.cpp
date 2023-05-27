#include <iostream>
using namespace std;

int main() {
    string borze;

    while (cin >> borze) {
        for (int i = 0; i < borze.length();)
        {
            if (borze[i] == '.') {
                cout << 0;
                i++;
            }
            else if (borze[i] == '-' && borze[i + 1] == '-') {
                cout << 2;
                i += 2;
            }
            else if (borze[i] == '-' && borze[i + 1] == '.') {
                cout << 1;
                i += 2;
            }
        }
        return 0;
    }
}