 #include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin>>n;
    vector<long long> ar(n);
    for(int i=0;i<n;i++) {
        cin>>ar[i];
    }
    const int l = 1000000;
vector<bool> primes(l + 1, true);
    primes[0] = primes[1] = false;
    for (int p = 2; p * p <= l; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= l; i += p)
                primes[i] = false;
        }
    }
    for(int i=0;i<n;i++) {
    long long root = round(sqrt(ar[i]));

        if (root * root == ar[i] && primes[root]) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
}
}