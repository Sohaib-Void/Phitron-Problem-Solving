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
        int n;              // columns number;
        cin >> n;
        string  r1 , r2;
        cin >> r1 >> r2;

        int flag = true;
        for(int i = 0; i < n; i++)
        {
            if( r1[i] == 'R' && r2[i] != 'R' || r1[i] != 'R' && r2[i] == 'R' )
            {
                flag = false;
                break;
            }

        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;


    }

}
