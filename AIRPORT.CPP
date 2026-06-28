#include <bits/stdc++.h>
using namespace std;
int main(){
int n, m;
    cin >> n >> m;

    vector<int> maxi(m);
    vector<int> mini(m);

    for (int i = 0; i < m; ++i) {
        cin >> maxi[i];
        mini[i] = maxi[i]; 
    }

    int ans1 = 0;
    for (int p = 0; p < n; ++p) {
        sort(maxi.begin(), maxi.end());
        
        ans1 += maxi[m - 1];
        maxi[m - 1]--; 
    }

    int ans2 = 0;
    sort(mini.begin(), mini.end());

    int i = 0;
    for (int p = 0; p < n; ++p) {
        while (mini[i] == 0) {
            i++;
        }
        
        ans2 += mini[i];
        mini[i]--;
    }

    cout << ans1 << " " << ans2 << "\n";
}