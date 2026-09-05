#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
  string s, t;
		cin >> s >> t;

		int n = s.size();
		int m = t.size();

		vector<int> fq(26, 0);
		for (int i = 0; i < m; i++) 
			fq[t[i] - 'A']++;
		for (int i = n - 1; i >= 0; i--) 
		{
			if (fq[s[i] - 'A'] > 0)
				fq[s[i] - 'A']--;
			else
				s[i] = '.';
		}

		string ans = "";
		for (int i = 0; i < n; i++) 
		{
			if (s[i] != '.')
				ans += s[i];
		}

		if (ans == t)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
        
    }
    return 0;
}