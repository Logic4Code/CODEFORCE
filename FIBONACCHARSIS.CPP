#include<bits/stdc++.h>
using namespace std;
 
int t, k, n;
 
int calc(int k, int x, int y)
{
	if(x < 0) return 0;
	if(k == 1) return 1;
	return calc(k - 1, y - x, x);
}
 
int main()
{
	cin >> t;
	while(t--)
	{
		int ans = 0; cin >> n >> k;
        for(int i = 0; i <= n; i++) {
            if (calc(k, i, n)) {
                ans++;
            }
        }
		cout << ans << '\n';
	}
}