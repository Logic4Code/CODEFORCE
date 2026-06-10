#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;
    while (t--)
    {
      long long n,x;
        cin >> n>>x;
        if(x==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<n<<" "<<n*x<<" "<<n*(x+1)<<endl;
        }
        
}
}