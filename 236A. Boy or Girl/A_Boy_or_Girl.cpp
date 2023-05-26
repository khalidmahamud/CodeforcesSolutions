#include <iostream>
using namespace std;

int main() {
    string s;
    char temp;
    int count = 0;

    while (cin >> s) {
        for (int i = 0; i < s.length(); i++)    
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s[i] > s[j]) {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }     
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1]) {
                count++;
            }
        }
        if (count % 2 == 0) {
            cout << "CHAT WITH HER!";
            
        }
        else {
            cout << "IGNORE HIM!";
        }
        break;
    }
}
