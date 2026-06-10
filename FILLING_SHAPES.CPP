#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        long long x = pow(2,n/2);
        if(n%2) cout<<0;
         else cout<< x;
}