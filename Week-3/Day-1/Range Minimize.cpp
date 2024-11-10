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
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort (a,a+n);

        int x = min(a[n-1]-a[2],a[n-3]-a[0]);
	    int y = a[n-2]-a[1];
	    cout << min(x , y) << endl;

    }


}
