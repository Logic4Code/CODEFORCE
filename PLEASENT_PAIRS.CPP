#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<pair<long long, long long>> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i+1;
        }
        int ans=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            for (int j = i + 1; j < n; j++)
			{
            long long p=1LL*a[i].first*a[j].first;
            if(p==a[i].second+a[j].second) ans++;
            else if(p>=2*n) break;
        }
    }
        cout<<ans<<endl;
    }
    return 0;
}