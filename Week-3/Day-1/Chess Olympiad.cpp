#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x  , y , z;
    cin >> x >> y >> z;

    int Round = x + y + z;
    int strictWinScore = 4 - Round;

    double myTeamScore = x * 1 + y * 0.5 + strictWinScore;
    double opponentScore = z * 1 + y * 0.5;

    if(myTeamScore > opponentScore)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
