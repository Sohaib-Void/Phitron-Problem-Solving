#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    sort(dq.begin(), dq.end());

    int mx_cont = 1,crcnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (dq[i] == dq[i - 1])
        {
            crcnt++;
        }
        else
        {
            mx_cont = max(mx_cont, crcnt);
            crcnt = 1;
        }
    }
    mx_cont = max(mx_cont, crcnt);
    int ans = mx_cont;
    cout << ans << '\n';

    return 0;
}
