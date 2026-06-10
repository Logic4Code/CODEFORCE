#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(7);
    long long s= 0;

    for (int i = 0; i < 7; ++i) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < 6; ++i) {
        s+=a[i];
    }
    cout<<a[6]-s<<endl;
}
}