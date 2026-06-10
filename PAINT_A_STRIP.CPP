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
    long long k = 1;
    long long m = 1;

    while (m < n) {
        k++;
        m= 2*(m+1);
    }

    cout<< k<<endl;
    }
}