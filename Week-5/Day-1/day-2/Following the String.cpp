#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<char, int> mp;
    for(char c = 'a'; c <= 'z'; c++)
    {
        mp[c] = 0;
    }
    string str = "";
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        for(char c = 'a'; c <= 'z'; c++){
            if(mp[c] == temp){
                str += c;
                mp[c]++;
                break;
            }
        }
    }
    cout << str << endl;
}
