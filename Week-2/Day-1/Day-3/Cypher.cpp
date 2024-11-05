#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t ;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n;i++)
        {
            int b;
            string moves;
            cin >> b >> moves;
            for(char c : moves)
            {
                if(c == 'U')
                {
                    a[i] = (a[i] + 9) % 10;

                }
                else if(c == 'D')
                {
                    a[i] = (a[i] + 1) % 10;
                }
            }
        }


        for(int i = 0; i < n; i++)
        {
            cout<< a[i] << " ";
        }


    }


    return 0;
}
