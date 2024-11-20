#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string ans;
        int idx = n - 1;
        while (idx >= 0)
        {
            if (s[idx] == '0')
            {
                int num = (s[idx - 2] - '0') * 10 + (s[idx - 1] - '0');
                ans = char('a' + num - 1) + ans;
                idx = idx - 3;
            }
            else
            {
                int num = s[idx] - '0';
                ans = char('a' + num - 1) + ans;
                idx--;
            }
        }
        cout << ans << endl;
    }


}
