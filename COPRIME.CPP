#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
    cin >> n;
    
    vector<int> p(1001, 0);
    
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p[x] = i;
    }
    
    int ans = -1;
    
    for (int i = 1; i <= 1000; i++) {
        if (p[i] == 0) continue; 
        
        for (int j = i; j <= 1000; j++) { 
            if (p[j] == 0) continue; 
            
            if (__gcd(i, j) == 1) {
                ans = max(ans, p[i] + p[j]);
            }
        }
    }
    
    cout << ans << "\n";
}
}