#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if(n%2 != 0)
       cout << N << endl;
    else{
        bool flag = true;
          cout << Y  << endl;
        for(int i = 0; i < n/2; i++){
            if(flag){
                cout << "AA";
                flag = !flag;
            }else{
                cout << "BB";
                flag = !flag;
            }
        }
        cout << endl;
    }

}
