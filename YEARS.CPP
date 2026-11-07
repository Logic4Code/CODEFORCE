#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     cin>>n;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int b, d;
        cin >> b >> d;
        m[b]++;
        m[d]--;
    }

    int x = 0;
    int y = 0;
    int z = 0;

    for (auto const& p : m) {
    int a = p.first;
    int c = p.second;

    x += c;
    if (x > y) {
        y = x;
        z = a;
    }
}

    cout << z << " " << y << "\n";
        
}