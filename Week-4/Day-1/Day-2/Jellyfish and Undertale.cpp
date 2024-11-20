#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int a, b, n;
    cin >> a >> b >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        b += min(a-1, temp);
    }
    cout << b << endl;
}
