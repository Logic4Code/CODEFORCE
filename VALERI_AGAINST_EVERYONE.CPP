#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
        cin>>a[i];
        }
        set<long long> s;
        for (int i = 0; i < n; ++i)
        {
            s.insert(a[i]);
        } 
        if(s.size()<n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}