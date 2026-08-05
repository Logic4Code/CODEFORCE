#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        vector<int> a(3);
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<min((a[1]-a[0]),(a[2]-a[1]))<<endl;
    }
    return 0;
}