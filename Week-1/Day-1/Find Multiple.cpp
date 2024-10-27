#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);


   int a,b,c;
   cin>>a>>b>>c;
   int ans = -1;
    for(int i=1;i<=10;i++)
    {
        if(c*i >=a && c*i<=b)
        {
            ans = c*i;
            break;
        }
    }
    cout << ans <<endl;



    return 0;
}
