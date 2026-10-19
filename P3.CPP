#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n, m;
    cin >> n >> m;
    if (n == 1) {
        cout << 0 << endl;
    }
    else if(n==2){
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
    }
else{
        int x = (n-1)/2+1;
        cout << x << "\n";
        for(int i = 1; i <= x; i++)
        cout << i << " " << i+x-1 << '\n';
    }
}
}