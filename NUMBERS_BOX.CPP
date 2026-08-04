#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, m;
		cin >> n >> m;

		vector<vector<long long>> a(n, vector<long long>(m));
		for (long long i = 0; i < n; i++)
			for (long long j = 0; j < m; j++)
				cin >> a[i][j]; 

		long long x = 0; 
		long long mini = INT_MAX; 
		long long s = 0;

		for (long long i = 0; i < n; i++)
		{
			for (long long j = 0; j < m; j++)
			{
				if (a[i][j] < 0)
					x++; 
				mini = min(mini, abs(a[i][j]));
				s += abs(a[i][j]); 
			}
		}

		if (x % 2 == 0)
			cout << s << endl;
		else
			cout << s - 2 * abs(mini) << endl;
	}
}