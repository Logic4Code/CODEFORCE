#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
    string b;
    cin>>b;
    if(b=="1000000000") cout<<10<<'\n';
    else{
        cout<<1;
        for(int i=1;i<b.size();i++) cout<<0;
        cout<<1<<endl;
    }
}
}