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
    
    int a = -1, b = -1, c = -1,ans=0;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = i;
            break;
        }
    }
    
    if (a != -1) {
        int rem = n / a;
        for (int i = 2; i * i <= rem; i++) {
            if (rem % i == 0 && i != a) {
                b = i;
                break;
            }
        }
        
        if (b != -1) {
            c = rem / b;
            if (c != a && c != b && c > 1) {
                cout << "YES\n" << a << " " << b << " " << c <<endl;
                ans++;
            }
        }
    }
    if(ans==0) cout << "NO"<<endl;
}   
}
