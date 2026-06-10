#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a=1;
        long long a1=3;
        for (int i = 1; i <=n; i++) {
        cout<<a*a1<<" ";
        a=a+2;
        a1=a1+2;
        }
        cout<<endl;
}
}