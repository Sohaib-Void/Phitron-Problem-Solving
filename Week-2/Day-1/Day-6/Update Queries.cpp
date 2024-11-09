#include <bits/stdc++.h>
using namespace std;

 int main ()
 {


     int t;
     cin >> t;
     while(t--)
     {
        int n, m;
        cin >> n >> m;
        string str;
        set<int> st;
        vector<char> ch(m);
        cin >> str;
        for(int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            st.insert(temp);
        }
        for(int i = 0; i < m; i++) cin >> ch[i];
        sort(ch.begin(), ch.end());
        int idx = 0;
        for(auto i : st)
        {
            str[i-1] = ch[idx++];
        }
        cout << str << endl;
     }
 }
