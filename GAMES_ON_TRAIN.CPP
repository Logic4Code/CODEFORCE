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
    
    int a = 0;
    int b = 7; 
    
    for (int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        if (h > a) a = h;
        if (h < b) b = h;
    }
    
    cout << a -b+1 << endl;
}
}