#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c = 0;
    if(n/2<k) cout<<-1<<endl;
    else{
for (int i = 0; i < k; ++i) {
        if (s[i] != 'R') {
            c++;
        }
    }
    for (int i = n - k; i < n; ++i) {
        if (s[i] != 'L') {
            c++;
        }
    }
cout<<c<<endl;
}
}
}