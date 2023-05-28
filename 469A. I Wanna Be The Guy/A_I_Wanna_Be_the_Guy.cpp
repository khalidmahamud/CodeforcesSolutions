#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, p, q;
    
    while (cin >> n) {
        cin >> p;
        int x[p];

        for (int i = 0; i < p; i++)
        {
            cin >> x[i];
        }

        cin >> q;
        int y[q];

        for (int i = 0; i < q; i++)
        {
            cin >> y[i];
        }

        sort(x, x + p);
        sort(y, y + q);

        int merged[p + q];

        int* it = set_union(x, x + p, y, y + q, merged);
        int mergedSize = it - merged;

        if (mergedSize == n) {
            cout << "I become the guy.";
        }
        else {
            cout << "Oh, my keyboard!";
        }
    }
}