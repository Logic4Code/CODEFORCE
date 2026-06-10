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
       int n,b=0,c=0,s=0;
       cin>>n;
       int a[n];
        for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==1){
            b++;
        }
        else{
            c++;
        }
        s+=a[i];
    }
    if(s%2!=0){
        cout<<"NO"<<endl;
    }
    else{
      if(c%2!=0 && b==0){
      cout<<"NO"<<endl;
      }  
      else{
        cout<<"YES"<<endl;
      }
    }
    }
}