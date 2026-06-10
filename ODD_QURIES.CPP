#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,q,l,r,k,count = 0,sum=0;
        cin >> n >>q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
    for (int m = 0; m < q; m++)
        {
            cin >>l>>r>>k;
        
        for (long long j= l-1; j < r; j++)
        {
            count+=a[j];
        }
           long long ans=0;
           ans= sum-count+(r-l+1)*k;
           count=0;
        if(ans%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    }
}