#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(a.begin(),a.end());
    int m=a[n/2];
    int l=0,r=0;
        for (int i = 0; i < n; ++i) {
            if(a[i]<m) l++;
            if(a[i]>m) r++;
        }
        cout<<max(l,r)<<endl;
}
}
