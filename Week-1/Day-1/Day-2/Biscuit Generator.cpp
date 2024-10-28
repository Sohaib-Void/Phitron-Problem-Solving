#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b, t;
    cin >> a >> b >> t;
    int count = (t + 0.5)/a;
    int biscute = count * b;
    cout << biscute << endl;

    return 0;
}
