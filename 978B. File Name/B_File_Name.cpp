#include <iostream> 
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    char file[n];
    for (int i = 0; i < n; i++) {
        cin >> file[i];
    }

    for (int i = 0; i < (n - 2); i++) {
        if (file[i] == 'x' && file[i + 1] == 'x' && file[i + 2] == 'x') {
            count++;
        }
    }

    cout << count;

}