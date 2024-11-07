#include <bits/stdc++.h>
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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        string str;
        cin >> str;
        map<int, int> one, zero;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '1')
            {
                one[v[i]] = i+1;
            }

            else
            {
                zero[v[i]] = i+1;
            }


        }
        map<int, int> ans;
        int cnt = 1;
        for(auto [ x, y ] : zero)
        {
            ans[y] = cnt++;
        }
        for(auto [ x, y ] : one)
        {
            ans[y] = cnt++;
        }
        for(auto [ x, y ] : ans)
        {
            cout << y << " ";
        }
        cout << endl;


    }


}

