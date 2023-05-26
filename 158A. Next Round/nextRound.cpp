#include <iostream>
using namespace std;

int main() {
    int n, k, p = 0;
    
    while(cin >> n >> k) {
        int a[n];

        for (int i = 1; i <= n; i++)         
        {
            cin >> a[i];
        }

        int score = a[k];

        for (int i = 1; i <= n; i++)
        {
            if (a[i] > 0 && a[i] >= score)
            {
                p++;
            }
            else {
                break;
            }
        }
        break;
    }

    cout << p;
    return 0;
} 