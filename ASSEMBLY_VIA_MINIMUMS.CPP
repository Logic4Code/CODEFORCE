#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n; 
cin >> n;
int m = n * (n - 1) / 2;
vector<int> b(m);

for (int i = 0; i < m; i++) cin >> b[i];
sort(b.begin(), b.end());

int x = 0; 
for (int i = n - 1; i > 0; i--) {
    cout << b[x] << ' ';
    x += i; 
}

cout << "1000000000"<<endl;
    }
}