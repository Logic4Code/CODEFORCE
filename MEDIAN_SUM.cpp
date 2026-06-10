#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,sum=0;
        cin>>a>>b;
        long long ar[a*b];
        for(int i=0;i<a*b;i++){
            cin>>ar[i];
        }
        long long p=0;
        for(int j=(a*b)-1-floor(a/2);p<b;j-=(floor(a/2)+1)){
            sum=sum+ar[j];
            p++;
        }
        cout<<sum<<endl;
    }
    return 0;
}