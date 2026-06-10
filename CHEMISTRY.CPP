#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        unordered_map<char,int> m;
        int c = 0;
        for(int i=0; i<n; i++) 
        {
            m[a[i]]++;
        }
        for(auto pair : m)
        {
            if (pair.second%2!=0)
            {
                c++;
            }
        }
        if (c > k+1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
 
    }
}