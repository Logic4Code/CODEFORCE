#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        long long p=1;
        int m=1e9+7;
        for (int i = 0; i < k; i++)
        {
            p*=n;
            p=p%m;
        }
        cout<<p%m<<endl;
    }
    return 0;
}