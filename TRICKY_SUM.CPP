 #include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
    cin >> n;
    long long sum=n*(n+1)/2;
    long long s=0;
    for(long long i=1;i<=n;i*=2){
   s=s+i;
    }
    cout<<sum-2*s<<endl;
    }
}