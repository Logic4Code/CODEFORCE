#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
		long long n, k;
		cin >> n >> k; 
		vector<long long> a(n);
		for (int i = 0; i < n; i++) 
			cin >> a[i];

		sort(a.begin(), a.end());

		long long x = 1; 
		long long y = 1; 
		for (int i = 1; i < n; i++)
		{
			if (a[i] - a[i - 1] <= k)
				x++; 
			else
				x = 1;
			y = max(y, x);
		}
		cout << n - y << endl;   
    }
    return 0;
}