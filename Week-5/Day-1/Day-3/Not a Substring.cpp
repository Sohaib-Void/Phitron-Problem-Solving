#include <bits/stdc++.h>
#define int long long
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    string a;
    while(cin>>a)
    {
        if (a == "()")
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;

        string d(a.length(), '(');
        d += string(a.length(), ')');

        string b="";
        for(int i=0; i<a.length(); i++)
            b+="()";
        if (d.find(a) != string::npos)
            cout<<b<<endl;
        else
        cout<<d<<endl;
    }

    return 0;
}
