#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> x, pair<string, int> y)
{
    return x.second > y.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, int> a;
    vector<pair<string, int>> v;
    int cnt = 0;

    while (t--)
    {
        string s;
        cin >> s;

        if (a.find(s) == a.end())
        {
            v.push_back({s, cnt});
        }
        a[s] = cnt++;
    }

    for (auto &val : v)
    {
        val.second = a[val.first];
    }

    sort(v.begin(), v.end(), cmp);

    for (auto val : v)
    {
        cout << val.first << '\n';
    }

    return 0;
}
