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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    if (n % 2 != 0) {
        cout<<"NO"<<endl;
    }
    else{
    int x = 0;
    for (int b : a) {
        if (b == -1) {
            x++;
        }
    }
    if((x % 2) == ((n / 2) % 2)) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl;
    }
}
}