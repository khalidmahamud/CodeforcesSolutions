#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int p[n];
        
        for (int i = 0; i < n; i++)
        {
            if (i != (n - 1))
            {
                p[i] = i + 2;
            } else {
                p[i] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        
        cout << endl;
    }
}
