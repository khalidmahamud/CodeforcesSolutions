#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s, t, move = "";
    int step = 0;
    cin >> s >> t;

    int hor_dis = s[0] - t[0];
    int ver_dis = s[1] - t[1];

    if (hor_dis == 0) {
        if (ver_dis < 0) {
            for (int i = 1; i <= abs(ver_dis); i++) {
                move += "U ";
                step++;
            }
        } 
        else if (ver_dis > 0) {
            for (int i = 1; i <= abs(ver_dis); i++) {
                move += "D ";
                step++;
            }
        }
    }
    else if (hor_dis < 0) {
        if (ver_dis == 0) {
            for (int i = 1; i <= abs(hor_dis); i++) {
                move += "R ";
                step++;
            }
        } 
        else if (ver_dis < 0) {
             if (abs(ver_dis) > abs(hor_dis)) {
                for (int i = 1; i <= abs(hor_dis); i++) {
                    move += "RU";
                    step++;
                }
                for (int i = abs(hor_dis) + 1; i <= abs(ver_dis); i++) {
                    move += "U ";
                    step++;
                }
             }
             else if (abs(ver_dis) <= abs(hor_dis)) {
                for (int i = 1; i <= abs(ver_dis); i++) {
                    move += "RU";
                    step++;
                }
                for (int i = abs(ver_dis) + 1; i <= abs(hor_dis); i++) {
                    move += "R ";
                    step++;
                }
             }
        }
        else if (ver_dis > 0) {
             if (abs(ver_dis) > abs(hor_dis)) {
                for (int i = 1; i <= abs(hor_dis); i++) {
                    move += "RD";
                    step++;
                }
                for (int i = abs(hor_dis) + 1; i <= abs(ver_dis); i++) {
                    move += "D ";
                    step++;
                }
             }
             else if (abs(ver_dis) <= abs(hor_dis)) {
                for (int i = 1; i <= abs(ver_dis); i++) {
                    move += "RD";
                    step++;
                }
                for (int i = abs(ver_dis) + 1; i <= abs(hor_dis); i++) {
                    move += "R ";
                    step++;
                }
             }
        }
    }
    else if (hor_dis > 0) {
        if (ver_dis == 0) {
            for (int i = 1; i <= abs(hor_dis); i++) {
                move += "L ";
                step++;
            }
        } 
        else if (ver_dis < 0) {
             if (abs(ver_dis) > abs(hor_dis)) {
                for (int i = 1; i <= abs(hor_dis); i++) {
                    move += "LU";
                    step++;
                }
                for (int i = abs(hor_dis) + 1; i <= abs(ver_dis); i++) {
                    move += "U ";
                    step++;
                }
             }
             else if (abs(ver_dis) <= abs(hor_dis)) {
                for (int i = 1; i <= abs(ver_dis); i++) {
                    move += "LU";
                    step++;
                }
                for (int i = abs(ver_dis) + 1; i <= abs(hor_dis); i++) {
                    move += "L ";
                    step++;
                }
             }
        }
        else if (ver_dis > 0) {
             if (abs(ver_dis) > abs(hor_dis)) {
                for (int i = 1; i <= abs(hor_dis); i++) {
                    move += "LD";
                    step++;
                }
                for (int i = abs(hor_dis) + 1; i <= abs(ver_dis); i++) {
                    move += "D ";
                    step++;
                }
             }
             else if (abs(ver_dis) <= abs(hor_dis)) {
                for (int i = 1; i <= abs(ver_dis); i++) {
                    move += "LD";
                    step++;
                }
                for (int i = abs(ver_dis) + 1; i <= abs(hor_dis); i++) {
                    move += "L ";
                    step++;
                }
             }
        }
    }

    cout << step << endl;
    for (int i = 0; i < (step * 2) - 1; i += 2) {
        cout << move[i] << move[i + 1] << endl;
    }
}