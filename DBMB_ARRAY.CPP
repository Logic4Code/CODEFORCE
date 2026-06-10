#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
   int n,s,x;
   cin >>n>>s>>x;
    int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum=0;
          for (int i = 0; i < n; i++)
        {sum=sum+a[i];
        }
        int diff=s-sum;
        if(diff<0){
             cout<<"NO";
        }
        else if(sum==s){
            cout<<"YES";
        }
        else if(diff%x==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
   }
 
    }
