#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++)
		{
			cin >> a[i];
		}

		int mx = 0;
		ll sum = 0, ans = 0;

		for(int i = 0 ; i< n; i++)
		{
			sum += a[i];
			mx = max(a[i], mx);
			if(sum - mx == mx)
            {
				ans++;
			}
		}

		cout << ans << endl;
	}
}
