#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
    cin >> n;
    
    map<int, int> ans;
    int b = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        ans[a]++;
        b = max(b, ans[a]);
    }
    cout << b;
}