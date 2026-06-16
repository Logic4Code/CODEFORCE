#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
     long long a1=a, b1=b, x1=x, y1=y, n1=n;
    long long z = min(n, a - x);
    a -= z;
    n -= z;
    long long o = min(n, b - y);
    b -= o;
   long long p= a * b;
long long z1 = min(n1, b1 - y1);
    b1 -= z1;
    n1 -= z1;
    long long o1 = min(n1, a1 - x1);
    a1 -= o1;
    long long p1= a1 * b1;
    cout<<min(p,p1)<<endl;
    }
}