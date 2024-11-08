#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<int> pq;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(temp == 0)
            {
                if(!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
          else
            {
                pq.push(temp);
            }
        }
        cout << ans << endl;

    }
}
