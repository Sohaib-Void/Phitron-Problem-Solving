#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n ,m ,h;
        cin >> n >> m >> h;

        int k = min(n,m);
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n,greater<int>());
        sort(b,b+m,greater<int>());
        ll total=0;
        for(int i=0;i<k;i++)
        {
            total+= min(a[i], (b[i]*h ));
        }
        cout << total <<endl;
    }
	return 0;
}
