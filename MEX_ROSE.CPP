#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        int x,arr[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>x;
            arr[x]++;
        }
        for(int j=0;j<k+1;j++){
            if(arr[j]==0&&j!=k) c++;
            
        }
        int d=arr[k];
       if(d>=c) cout<<d<<endl;
       else cout<<c<<endl;
    }
    return 0;
    }