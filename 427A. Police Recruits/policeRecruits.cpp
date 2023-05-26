#include <iostream>
using namespace std;

int main() {
    long int n, c = 0, p = 0;
    
    while(cin >> n) {
        long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                p = p + a[i];
            }
            else if (a[i] < 0 && p > 0) {
                p = p + a[i];
            }
            else if (a[i] < 0) {
                c++;
            }         
        }
        break;
    }
    cout << c;
}