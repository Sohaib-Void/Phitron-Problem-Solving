#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    ll a , b  ,n , s ;
    cin >> t;
    while(t--)
    {
        ll sum = 0;
        cin >> a >> b >> n >> s;

        ll d = s / n;
		d = min(d, a);

		if (s - n * d <= b)
        {
			cout << "YES" << endl;
		}
		else
        {
			cout << "NO" << endl;
		}
    }

}
