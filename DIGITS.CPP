#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
    long long n;
    int d;
    cin >> n >> d;

    long long fact = 1;
    for (long long i = 1; i <= min(n, 6LL); i++) {
        fact *= i;
    }
    vector<int> ans;

    ans.push_back(1);

    if ((fact * d) % 3 == 0 || n >= 3)
    {
        ans.push_back(3);
    }

    if (d == 5)
    {
        ans.push_back(5);
    }

    if (n >= 3 || fact % 6 == 0)
    {
        ans.push_back(7);
    }
    else
    {
        long long val = 0;
        for (int i = 0; i < fact; i++)
        {
            val = val * 10 + d;
        }
        if (val % 7 == 0)
            ans.push_back(7);
    }

    if (n >= 6 || (fact * d) % 9 == 0)
    {
        ans.push_back(9);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] <<" ";
    }
    cout <<endl;
}
}