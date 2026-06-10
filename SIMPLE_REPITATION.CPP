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
   int n,k;
   cin >>n>>k;
   if(n==1&&k==1){
    cout<<"NO"<<endl;
   }
   else if(n==1&&k==2){
    cout<<"YES"<<endl;
   }
   else if(k>=2){
    cout<<"NO"<<endl;
   }
   else{
    bool v=true;
      for (int i = 2; i*i <=n; i++)
      {
        if(n%i==0){
            cout<<"NO"<<endl;
            v=false;
            break;
        }
      }
      if(v){
        cout<<"YES"<<endl;
      }
      
   }
   
   
     
           
}}

