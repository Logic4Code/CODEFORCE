#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        if(a<b){
            cout<<"NO"<<endl;
        }
        else{
            if(a>=b*b){
            if(a%2==b%2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
}