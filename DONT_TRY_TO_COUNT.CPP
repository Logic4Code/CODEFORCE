#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        int n,m;
        cin>>n>>m;
        cin>>a>>b;
     int c = 0;
        bool ans = false;
        for (int i = 0; i <= 6; i++) {
            if (a.find(b) != string::npos) {
                cout << c << endl;
                ans = true;
                break;
            }
            a += a;
            c++;
        }
        
        if (!ans) {
            cout << -1 << endl;
        }
    }
    }