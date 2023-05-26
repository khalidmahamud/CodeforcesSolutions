#include <iostream>
#include <algorithm>
using namespace std;

void sortedArray (int arr[], int size) {
    sort(arr, arr + size);
}

int main() {
    int n, p;
    
    while (cin >> n) {
        cin >> p;
        int x[p];
        int size1 = sizeof(x) / sizeof(x[0]);

        for (int i = 0; i < p; i++)
        {
            cin >> x[i];
        }

        sortedArray(x, size1);

        cin >> p;
        int y[p];
        int size2 = sizeof(y) / sizeof(y[0]);

        for (int i = 0; i < p; i++)
        {
            cin >> y[i];
        }

        sortedArray(y, size2);

        int merged[size1 + size2];

        int* it = set_union(x, x + size1, y, y + size2, merged);
        int mergedSize = it - merged;

        if (mergedSize == n) {
            cout << "I become the guy.";
        }
        else {
            cout << "Oh, my keyboard!";
        }
    }
}