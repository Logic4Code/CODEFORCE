#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n,k;
    cin >> n>>k;
    if(k==n-1) cout<<-1<<endl;
        else {
            int c1=(n+1)/2;
            int c0=n/2;
            int c=n-k;
            int p=(c+1)/2;
            int q=c/2;
            string s;
            for (int i = 0; i < c1-p+1; ++i) {
            s+="1";
        }
        for (int i = 0; i < c0-q+1; ++i) {
            s+="0";
        }
        for (int i = 2; i < c; ++i) {
            if(i%2==0) s+="1";
            else s+="0";
        }
        cout<<s<<endl;
        }
}
}