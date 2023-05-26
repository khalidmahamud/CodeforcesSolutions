#include <iostream>
#include <algorithm>
using namespace std;

int maxElement (int arr[], int size) {
    int* max = max_element(arr, arr + size);
    return *max;
}

int main() {
    int n, p, max1, max2;
    
    while (cin >> n) {
        cin >> p;
        int x[p];
        int size = sizeof(x) / sizeof(x[0]);

        for (int i = 0; i < p; i++)
        {
            cin >> x[i];
        }

        max1 = maxElement(x, size);

        cin >> p;
        int y[p];
        size = sizeof(y) / sizeof(y[0]);

        for (int i = 0; i < p; i++)
        {
            cin >> y[i];
        }

        max2 = maxElement(y, size);

        if (max1 > n || max2 >= n) {
            cout << "I become the guy.";
        }
        else {
            cout << "Oh, my keyboard!";
        }

        return 0;
    }
}