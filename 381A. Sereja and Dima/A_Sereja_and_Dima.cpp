#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cards[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int sScore = 0;
    int dScore = 0;

    int left = 0;
    int right = n - 1;

    bool serejaTurn = true;

    while (left <= right) {
        if (cards[left] >= cards[right]) {
            if (serejaTurn) {
                sScore += cards[left];
            }
            else {
                dScore += cards[left];
            }
            left++;
        } else {
            if (serejaTurn) {
                sScore += cards[right];
            }
            else {
                dScore += cards[right];
            }
            right--;
        }

        serejaTurn = !serejaTurn;
    }

    cout << sScore << " " << dScore << endl;

    return 0;
}
