#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
  int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];
bool ans=true;

    if (A[n - 1] != B[n - 1]) {
        ans= false;
    }
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] != B[i] && (A[i] ^ A[i + 1]) != B[i] && (A[i] ^ B[i + 1]) != B[i]) {
        ans= false;
        break;
        }
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}