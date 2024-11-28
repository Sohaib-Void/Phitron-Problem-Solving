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
        if(n == 1)
        {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;

        }

        int l = 2, r = 3*n;
        cout << (n+1)/2 << endl;
        for(int i = 0; i < (n+1)/2; i++)
        {
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }
}

