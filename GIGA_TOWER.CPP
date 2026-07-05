#include <bits/stdc++.h>
using namespace std;
bool ans(long long m){
	if(m<0) m=-m;
	while(m){
		if(m%10==8) return true;
		m/=10;
	}
	return false;
}
int main()
{
long long a;
    cin >> a;

    int b = 1;
    while (!ans(a + b)) {
        b++;
    }

    cout << b;
}