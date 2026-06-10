#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
   int n,t;
   cin>>n;
   for(int i=3;i<=n;i++){
    t=(pow(2,i-1)-1);
    if(n%t==0){
        cout<<n/t;
        break;
    }
   }
    }
}