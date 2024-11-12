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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = n-1; i >= 0; i--)
        {
            mp[v[i]]++;
            if(mp[v[i]] > 1)
            {
                cout << i+1 << endl;
                return 0;
            }
        }
        cout << 0 << endl;

    }


}
