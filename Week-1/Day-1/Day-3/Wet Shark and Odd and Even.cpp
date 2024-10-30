#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }


    sort(numbers.begin(), numbers.end(), greater<int>());

    int even_sum = 0;
    for (int num : numbers)
    {
        if (num % 2 == 0)
        {
            even_sum += num;
            break;
    }


    if (even_sum == 0)
    {
        for (int i = 0; i < n && even_sum < 2; i++)
        {
            even_sum += numbers[i];
        }
    }

    cout << even_sum << endl;

    return 0;
}


}
