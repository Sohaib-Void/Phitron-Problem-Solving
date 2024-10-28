#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int a[26]={0};
    int count=0;
    for(int i = 0; i < s.size(); i++)
    {
        a[s[i]-'a']++;
    }

    char c;
    for(int i=0;i<26;++i)
    {
        if(a[i] == 0)
        {
            count++;
            c = i+'a';
            break;
        }
    }
    if(count ==0)
    {
        cout << "None" << endl;

    }

    else
        cout << c << endl;
    return 0;
}
