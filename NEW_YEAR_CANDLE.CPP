#include <bits/stdc++.h>
using namespace std;
int main(){
        int a,b,c=0,d=0;
        cin>>a>>b;
         int ans = 0;
	while(a >= b){
		ans += b;
		a = a - b + 1;
	}
	ans += a;
    cout<<ans;
}