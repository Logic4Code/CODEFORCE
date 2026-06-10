#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<double> x(n);
    double c = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    for (int i = 1; i < n; i++)
    {
        c = max(c, x[i] - x[i - 1]);
    }
   double z=max(x[0],m-x[n-1]);
   cout<<fixed<<setprecision(10)<<max(z,c/2.0);

}
