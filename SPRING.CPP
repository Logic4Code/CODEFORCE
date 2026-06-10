#include <bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c,m,d,e,f,g;
        cin>>a>>b>>c>>m;
        vector<long long> ar(3);
        long long k1=(a*b)/__gcd(a,b);
        d=(k1*c)/__gcd(k1,c);
        e=a*b/(__gcd(a,b));
        f=a*c/(__gcd(a,c));
        g=b*c/(__gcd(b,c));
        long long y1=m/e,y2=m/f,y3=m/g,y4=m/d;
       long long ans1=((m/a)*6)-(y1*3)-(y2*3)+(y4*2);
        long long ans2=((m/b)*6)-(y1*3)-(y3*3)+(y4*2);
         long long ans3=((m/c)*6)-(y3*3)-(y2*3)+(y4*2);

             cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }
}