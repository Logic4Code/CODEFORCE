#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int a,b;
       cin>>a>>b;
       if(b%(a-1)==0){
        cout<<(a*(b/(a-1)))-1<<endl;
       }
       else{
         cout<<(a*(b/(a-1)))+b%(a-1)<<endl;
       }
    }
    
}