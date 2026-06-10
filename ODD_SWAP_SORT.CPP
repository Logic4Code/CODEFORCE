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
    
    vector<int> odds, evens,x,y;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            evens.push_back(a);
        } else {
            odds.push_back(a);
        }
    }
    x=odds;
    sort(x.begin(),x.end());
        y=evens;
    sort(y.begin(),y.end());

    
    if (x==odds && y==evens) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
}
