#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
                long long n;
        string s;
        cin >> n >> s;
        unordered_map<char,long long> x;
        unordered_map<char,long long> y;
 
        for(long long i=0; i<n; i++) x[s[i]]++;
 
        long long ans = 0;
        for(long long i=0; i<n; i++)
        {
            x[s[i]]--;
            y[s[i]]++;
            if (x[s[i]]==0) x.erase(s[i]);
            long long sum = x.size()+y.size();
            ans = max(ans,sum);
        }
        cout << ans << endl;
    }
    return 0;
}