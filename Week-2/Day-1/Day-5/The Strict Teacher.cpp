#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> b(m);
        map<int, int> mp;
        for(int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b[i] = x;
            mp[x]++;
        }
        sort(b.begin(), b.end());
        while (q--)
        {
            int a;
            cin >> a;
            if (mp[a] > 0) cout << 0 << endl;
            else if(a < b[0]) cout << b[0]-1 << endl;
            else if(a > b[m-1]) cout << n - b[m-1] << endl;
            else{
                auto it = upper_bound(b.begin(), b.end(), a);
                int idx = distance(b.begin(), it);
                cout << (b[idx]-b[idx-1])/2 << endl;
            }
        }


    }


}
