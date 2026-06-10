#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long k= __gcd(a,b);
        if(a/k<=c && b/k<=c){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
   
    }
}