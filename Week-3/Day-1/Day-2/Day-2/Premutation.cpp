#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<vector<int>> v(n, vector<int>(n-1));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n-1; j++)
            {
                cin >> v[i][j];
                if(j == 0) mp[v[i][j]]++;
            }
        }
        int fnt;
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(mp[v[i][0]] == 1) ans = v[i];
            else
               fnt = v[i][0];
        }
        cout << fnt << ' ';
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }

}
