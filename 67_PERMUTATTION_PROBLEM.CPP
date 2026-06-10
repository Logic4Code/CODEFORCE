#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a = 1;
        int b = 3 * n;

        for (int i = 0; i < n; i++) {
            cout << a << " " << b - 1 << " " << b << " ";
            a++;      
            b -= 2;  
        }
        cout<<endl;
}
}