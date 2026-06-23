#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long p = 0;

    for (int k = 1; k < n; ++k) {
        if (n % k != 0) continue; 

        vector<long long> ans;
        long long s = 0;

        for (int i = 0; i < n; ++i) {
            s += a[i];
            
            if ((i + 1) % k == 0) {
                ans.push_back(s);
                s = 0;
            }
        }

        long long mini = *min_element(ans.begin(), ans.end());
        long long maxi = *max_element(ans.begin(), ans.end());

        p = max(p, maxi - mini);
    }

    cout << p <<endl;
}
}