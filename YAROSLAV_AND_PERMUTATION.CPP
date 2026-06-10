#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;
    
    unordered_map<int, int> ans;
    int num = 0;
    
    for (int i = 0; i < n; ++i) {
        int z;
        cin >> z;
        ans[z]++;
        num = max(num, ans[z]);
    }
    
    if (num <= (n + 1) / 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}