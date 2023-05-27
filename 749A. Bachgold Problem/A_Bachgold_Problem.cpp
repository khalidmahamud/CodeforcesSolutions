#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    while (cin >> n) {

        if (n % 2 == 0) {
            for (int i = 2; i <= n; i += 2) {
                count++;
            }
            cout << count << endl;
            for (int i = 0; i < count; i++)
            {
                cout << 2 << " ";
            }
        }
        else if ((n - 3) % 2 == 0) {
            for (int i = 2; i <= (n - 3); i += 2) {
                count++;
            }
            cout << count + 1 << endl;
            for (int i = 0; i < count; i++)
            {
                cout << 2 << " ";
            }
            cout << 3;
        }

        
        return 0;
    }
}
