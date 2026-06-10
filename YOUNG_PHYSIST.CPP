#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x=0,y=0,z=0;
    cin>>t;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        x+=a[0];
        y+=a[1];
        z+=a[2];
    }
    if(x==0 &&y==0&&z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}