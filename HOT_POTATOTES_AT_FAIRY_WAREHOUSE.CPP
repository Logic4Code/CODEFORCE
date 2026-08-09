#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,a,k=0,l=0;
        string s;
        cin>>n>>a>>s;
        if(s[0]=='0') s=s+s[0];
        for(int i=1;i<s.size();i++){
            if(s[i-1]=='1' && s[i]=='0'){
                swap(s[i],s[i-1]);
                i++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(i%2==0 && s[i]=='1')k++;
             if(i%2!=0 && s[i]=='1')l++;
        }
        cout<<l<<" "<<k<<endl;
    }
    return 0;
}