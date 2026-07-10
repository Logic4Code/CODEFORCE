#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> num;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        num.insert(a);
    }

    if (num.size() > 3) {
        cout << "NO" << endl;
    } 
    else if (num.size() == 3) {
        vector<int> v(num.begin(), num.end());
        if (v[1] - v[0] == v[2] - v[1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
    else {
        cout << "YES" << endl;
    }
}