#include <bits/stdc++.h>
using namespace std;
int main()
{
         int n;
    cin >> n ;
      if(n==0){
        cout<<1;
    }
    else{
    int k=n%4;
    if(k==1){
        cout<<8;
    }
    if(k==2){
        cout<<4;
    }
    if(k==3){
        cout<<2;
    }
    if(k==0){
        cout<<6;
    }
}
}
