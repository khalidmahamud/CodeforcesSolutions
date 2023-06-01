#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;

    long n1 = n % 3;
    long n2 = n1;
    long n3 = (n - n1 * 2);

    if (n3 % 3 == 0) {
        n1 += (n3 % 3 + 1);
    }
    cout << n1 << " " << n1 << " " << (n - n1 * 2);

}