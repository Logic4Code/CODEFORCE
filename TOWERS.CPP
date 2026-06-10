#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
     vector<int> a(n);
     for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        counts[a[i]]++;
    }

    int ans1 = 0;
    int ans2 = counts.size();

  for (const auto& pair : counts) {
    int length = pair.first;
    int freq = pair.second;
    
    if (freq > ans1) {
       ans1 = freq;
    }
}

    cout << ans1 << " " << ans2 << endl;
}