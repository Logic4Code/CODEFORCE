#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin >> n;
        cin >> a>> b;
        int ans;
       ans=( a/2)+b;
       if(ans>n){
        cout<<n;
       }
      else{
         cout<<ans;
    }
}
}