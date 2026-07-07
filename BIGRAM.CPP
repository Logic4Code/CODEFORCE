#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
int k;
    cin >> k;
    
    int x = 0;
    int y = 0;
    
    for (int i = 0; i < k; ++i) {
        int c;
        cin >> c;
        
        if (c >= 3) {
            y++;
        }
        if (c >= 2) {
            x++;
        }
    }
    if (y>0 || x >= 2) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
    }
}