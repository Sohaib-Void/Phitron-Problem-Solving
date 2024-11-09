#include <bits/stdc++.h>
using namespace std;

int main ()
{
     int t;
     cin >> t;
     while(t--)
     {
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            mp[temp]++;
        }
        int ans = 0;
        while(!mp.empty())
        {
            int pre = -1;
            stack<int> st;
            for(auto [ x, y ] : mp)
            {
                if(x == pre+1){
                    pre = x;
                    mp[x]--;
                    if(mp[x] == 0) st.push(x);
                }
               else
                {
                    ans++;
                    pre = x;
                    mp[x]--;
                    if(mp[x] == 0) st.push(x);
                }
            }

            while(!st.empty()){
                mp.erase(st.top());
                st.pop();
            }
        }
        cout << ans << endl;
     }
}
