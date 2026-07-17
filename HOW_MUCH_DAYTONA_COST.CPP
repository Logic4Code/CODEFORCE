#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n, k;
    cin >> n >> k;
    bool ans=false;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]==k) ans=true;
    }
    if (ans){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
        }
    }
}