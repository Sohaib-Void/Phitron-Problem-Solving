#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> svr;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        svr[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cmd, ip;
        cin >> cmd >> ip;
        ip.pop_back();
        cout << cmd << " " << ip << "; #" << svr[ip] << endl;
    }

    return 0;
}
