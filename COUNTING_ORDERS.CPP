#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> b(n);
        for (int i=0; i<n; i++) cin >> b[i];
        sort(b.rbegin(), b.rend());
        long long ans=1;
        int c=n-1;
         int m = 1e9 + 7;
        for(int i=0;i<n;i++){
            while(c>=0 && a[c]>b[i]){
                c--;
            }
            if(((n-1)-c)-i<=0) {
                ans=0;
                break;
            }
            ans = (ans * (((n - 1) - c) - i)) % m;
        }
        cout<<ans<<endl;
    }
}