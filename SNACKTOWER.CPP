#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
    cin >> n;
    
    vector<bool> ans(n + 1, false);
    
    int b = n;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
        ans[a] = true;
        
        while (b > 0 && ans[b]) {
            cout << b << " ";
            b--;
        }
        cout <<endl;
    }
}