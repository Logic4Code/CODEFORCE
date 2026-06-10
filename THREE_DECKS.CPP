#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int a, b,c;
    cin >> a >> b>>c;
    if((a+b+c)%3!=0 || a>(a+b+c)/3 || b>(a+b+c)/3 ){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
}