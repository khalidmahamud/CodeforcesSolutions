#include <iostream>
using namespace std;

int main() {
    int n, t1Score = 0, t2Score = 0;
    string des, team1 = "", team2 = "";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> des;
        if (i == 0) {
            team1 = des;
        }
        else if (des != team1) {
            team2 = des;
        }
        if (des == team1) {
            t1Score++;
        }
        if (des == team2)
        {
            t2Score++;
        }
    }
    
    if (t1Score > t2Score)
    {
        cout << team1;
    } else {
        cout << team2;
    }   
}