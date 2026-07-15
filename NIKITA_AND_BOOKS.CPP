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
    int k=0;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long x=0;
for (int i = 0; i < n; i++) {
        x += a[i] - (i+1);
        if (x < 0) {
            k ++;
        }
    }
    if (k==0) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}
}