#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
    cin >> n ;
    vector<int> a(n);
    set<int>s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    if(s.size()>2) cout<<"NO"<<endl;
    else if(s.size()==1) cout<<"YES"<<endl;
    else{
        int c = 0;
            int b = a[0];
            for (int x : a) {
                if (x == b) {
                    c++;
                }
            }
            if (c == n / 2 || c == (n + 1) / 2) {
                cout << "YES"<<endl;
            } else {
                cout << "NO"<<endl;
            }
    }
}
}