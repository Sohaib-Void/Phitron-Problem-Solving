#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin>>n;
    for(int i=1; i<=4-n.size(); i++)
    {
        cout << 0 ;
    }

    cout<<n<<endl;
    return 0;
}
