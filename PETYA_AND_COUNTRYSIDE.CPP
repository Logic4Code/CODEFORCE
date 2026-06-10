#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, ans1 = 0, ans2 = 0;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            int j = i + 1;
            while (j < n)
            {
                if (ar[j] <= ar[j-1])
                {
                    ans1++;
                }
                else  break;
                j++;
            }
            ans = max(ans, ans1);
        }
        else if (i == n - 1)
        {
            int j = n - 2;
            while (j >= 0)
            {
                if (ar[j] <= ar[j+1])
                {
                    ans2++;
                }
                else   break;
                j--;
            }
            ans = max(ans, ans2);
        }
        else
        {
            int j = i - 1;
            int ans3 = 0;
            int ans4 = 0;
            while (j >= 0)
            {
                if (ar[j] <= ar[j+1])
                {
                    ans3++;
                }
                else  break;
                j--;
            }
            int k = i + 1;
            while (k < n)
            {
                if (ar[k] <=ar[k-1])
                {
                    ans4++;
                }
                else   break;
                k++;
            }
            ans = max(ans, ans4+ans3);
        }
    }
    cout<<ans+1;
}