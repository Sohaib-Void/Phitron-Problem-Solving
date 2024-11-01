#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, int> a;
    deque<string> dq;

    while (t--)
    {
        string s;
        cin >> s;

        if (a[s] == 0)
        {
            dq.push_back("NO");
            a[s] = 1;
        }
        else
        {
            dq.push_back("YES");
        }
    }
    for (auto val : dq)
    {
        cout << val << '\n';
    }

    return 0;
}
