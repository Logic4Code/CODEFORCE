#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         long long p,a,b,c;
    cin >> p >>a>>b>>c;  
    if(p%a==0 || p%b==0 || p%c==0){
        cout<<0<<endl;
    }
    else{
        long long x= a-(p%a);
        long long y= b-(p%b);
        long long z= c-(p%c);
      cout<<min({x,y,z})<<endl;
    }
    }
}