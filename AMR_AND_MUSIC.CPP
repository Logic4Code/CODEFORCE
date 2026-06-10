#include <bits/stdc++.h>
using namespace std;
int main()
{
       int n, k;
    cin >> n >> k;

    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;   
        p[i].second = i + 1; 
    }
    sort(p.begin(), p.end());
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (p[i].first <= k) {
            ans.push_back(p[i].second);
            k -= p[i].first;
        } else {
            break; 
        }
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
