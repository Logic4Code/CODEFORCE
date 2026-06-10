#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,sum=0;
    cin>>t;
      for(int i=1;i<=t;i++){
           sum+=i;
        }
        if(sum%2==0){
            cout<<0;
        }
        else{
            cout<<1;
        }
}