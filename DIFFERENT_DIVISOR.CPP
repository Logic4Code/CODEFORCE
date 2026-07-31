#include <bits/stdc++.h>
using namespace std;
vector<bool> pr(100000, true);
void sieve() {
    pr[0] = pr[1] = false;
    for (int p = 2; p * p < 100000; p++) {
        if (pr[p]) {
            for (int i = p * p; i < 100000; i += p)
                pr[i] = false;
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
    int n;
    cin >> n;
    int p = 1 + n;
    while (!pr[p]) {
        p++;
    }

    int q = p + n;
    while (!pr[q]) {
        q++;
    }

    cout <<  p * q << "\n";
}
    }