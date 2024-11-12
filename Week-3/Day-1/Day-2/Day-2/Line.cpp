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
        string str;
        cin >> str;
        int lf, rt;
        vector<int> v;
        int ans = 0;
        for(int i = 0; i < n; i++)
            {
            if(str[i] == 'L') ans += i;
            else
                ans += (n-i-1);
        }
        v.push_back(ans);
        for(int i = 0; i < n/2; i++)
        {
            lf = i;
            rt = n-1-i;
            if(str[rt] != 'L') v.push_back(v.back()+rt-(n-rt-1));
            if(str[lf] != 'R') v.push_back(v.back()+n-lf-1-lf);

        }
            for(int i = 1; i <= n; i++)
            {
            if(i < v.size()) cout << v[i] << " ";
            else cout << v.back() << " ";
           }
        cout << endl;
    }




}
