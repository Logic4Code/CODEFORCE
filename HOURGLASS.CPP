#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int s,k,m,a;
        cin>>s>>k>>m;
        a=m/k;
        if(a%2==0){
            if(m%k>=s) cout<<0<<endl;
           else  cout<<s-(m%k)<<endl; 
        }
        else {
          if((m%k)>=s) cout<<0<<endl;
          else {
            if(s>=k)cout<<k-(m%k)<<endl;
        else cout<<s-(m%k)<<endl;   }
        }
    }
    return 0;
}