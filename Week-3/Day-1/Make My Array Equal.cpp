#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int  arr[n];


    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }

    else if(n==2)
    {
        if(arr[0]==0||arr[1]==0||arr[0]==arr[1])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        bool ans = true;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==0)
            {
                continue;
            }
            else
            {
                if(arr[i]!=arr[i+1])
                {
                    ans = false;
                }
            }
        }

        if(!ans)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
