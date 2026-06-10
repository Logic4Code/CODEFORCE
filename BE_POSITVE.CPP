#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
        int n,c=0,d=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]==0) c++;
            else if(ar[i]==-1) d++;
        }
        int p=(d%2)*2+c;
        cout<<p<<endl;
    }
    return 0;
}