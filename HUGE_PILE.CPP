#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        if (k > n) {
            cout << -1 << '\n';
            continue;
        }

        long long x = n;
        long long y=n;
        long long time = 0;
        long long lim=0;

        while (x > k ) {
            x = (x + 1) / 2;
            time++;
        }
         while (y > k ) {
             y = (y)/2;
            lim++;
        }

        if (x == k||y==k)
            cout << min(time,lim) << '\n';
         
            
        else
            cout << -1 << '\n';
    };

    return 0;
}