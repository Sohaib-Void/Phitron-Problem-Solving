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
        int x , y;
        cin >> x >> y;
        if(x >= y)
            cout << x % 3 << endl;
	    else
	        cout << y % 3 << endl;
    }
}