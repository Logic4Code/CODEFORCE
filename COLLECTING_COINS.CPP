#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,k;
        cin >>a>>b>>c>>k;
       
         int m=max(a,max(b,c));
         int d=m-a;
         int e=m-b;
         int f=m-c;
         int z=k-d-e-f;
         if(z<0){
            cout<<"NO"<<endl;
         }
         else if(z==0){
            cout<<"YES"<<endl;
         }
         else if(z%3==0){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }

    }
}
