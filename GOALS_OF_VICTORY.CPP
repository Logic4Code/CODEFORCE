#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int n,b=0;
    cin >> n ;  
    int a[n];
    for (int i = 0; i < n-1; i++) {
        cin>>a[i];
        b+=a[i];
    }
    cout<<-1*b<<endl;
}
}