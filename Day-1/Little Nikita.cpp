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
        int n , m ;
        cin >> n >> m;
        if(n < m || (n+m)% 2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
