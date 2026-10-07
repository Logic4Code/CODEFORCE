#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
      int a;
        cin>>a;
        vector<int>k(a);
        int c1=0,c0=0;
        for (int i = 0; i < a; i++)
        {
           cin>>k[i];
           if(k[i]==1){
            c1++;
           }
           else{
            c0++;
           }
        }
        if(c1>=c0){
            cout<<"Bessie"<<endl;
        }
        else{
            cout<<"Elsie"<<endl;
        }
        
    }
    return 0;
}