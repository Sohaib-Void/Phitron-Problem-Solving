#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != c[i] && b[i] != c[i])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;


}
