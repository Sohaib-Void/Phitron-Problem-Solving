#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{

    long t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        vector<long> v(n + 1);
        for(long i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        long mncnt(3);
        for(long i = 1; i <= n; i++)
        {
            if(!v[i])
            {
                continue;
            }
            long x(i), cnt(0);
            while(v[x])
            {
                cnt++;
                long y = v[x]; v[x] = 0;
                x = y;
            }
            mncnt = (cnt < mncnt ? cnt : mncnt);
        }

        cout << mncnt << endl;
    }

}
