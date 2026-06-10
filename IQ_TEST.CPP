 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int > ar(n);
    vector<int > e;
    vector<int > o;
    for(int i=0;i<n;i++) {
        cin>>ar[i];
        if(ar[i]%2==0) e.push_back(i+1);
        else o.push_back(i+1);
    }
    if(e.size()==1) cout<<e[0];
    else cout<<o[0];
}