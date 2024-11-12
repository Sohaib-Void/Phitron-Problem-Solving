#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
    string s;
    stack<string> st;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        st.push(s);

    }
    while(!st.empty())
    {
        string str = st.top();
        mp[str]++;
        st.pop();
        int si = str.size()-1;
        if(mp[str]<=1)
        cout<<str[si-1]<<str[si];
    }



}
