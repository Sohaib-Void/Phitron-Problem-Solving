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
        cout << 2 << endl;
        cout << n << " " << n-1 << endl;
        int i = n, j = n-2;
        while(j > 0)
        {
            cout << i-- << " " << j-- << endl;
        }
    }
}
