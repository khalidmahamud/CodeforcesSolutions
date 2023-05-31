#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1;

    for (char& c : s1) {
        c = tolower(c);
    }

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o'|| s1[i] == 'u' || s1[i] == 'y') {
            continue;
        } else {
            s2 = s2 + '.' + s1[i];
        }
    }

    cout << s2;
}