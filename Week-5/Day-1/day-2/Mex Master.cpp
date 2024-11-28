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

        int n;
        cin >> n;
        map<int, int> mp;
        bool one = true;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(temp > 1) one = false;
            mp[temp]++;
        }
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(mp[i] == n){
                if(i == 0) cout << 1 << endl;
                else cout << 0 << endl;

            }
            if(mp[i] <= (n+1)/2)
            {
                if(i == 1 && one) i++;
                cout << i << endl;

            }
        }
    }
}

