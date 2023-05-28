#include <iostream>
using namespace std;

int main() {
    int t, a, b, count, dis;
    cin >> t;
    while (t--) {
        count = 0;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        else if (a > b) {
            dis = a - b;
            count++;
            if (dis % 2 != 0) {
                count++;
            }
        }
        else if(a < b){
            dis = b - a;
            count++;
            if (dis % 2 != 1) {
                count++;
            }
        }
        cout << count << endl;
    }
}