#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x;
    cin>>x;

    ll e=x,count=0;
    while(e>1)
    {
        e=e/2;
        count++;
    }
    ll temp=pow(2,count);
    cout<<x-temp<<" "<<temp<<endl;
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}

