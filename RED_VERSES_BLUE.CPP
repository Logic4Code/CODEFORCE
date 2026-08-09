#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
		cin >> n >> r >> b; 
		int x = r % (b + 1);
		for (int i = 1; i <= b + 1; i++)
		{
			for (int i = 0; i <  r / (b + 1); i++)
				cout<<"R";
			if (x > 0)
			{
				cout<<"R";
				x--;
			}
			if (i != b + 1)
				cout<<"B";
		}
        cout<<endl;
    }
    return 0;
}