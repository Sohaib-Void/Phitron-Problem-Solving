#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n ,x;
    cin >> n >> x;
    long long ar[n];
    for(int i=0;i<n;i++)
    {
        long long a;
        cin >> a;
        if(a != x)
        cout << a << " ";

    }
    cout << endl;
    return 0;
}
