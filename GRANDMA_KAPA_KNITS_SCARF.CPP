#include <bits/stdc++.h>
using namespace std;
int pal(int i,int j,int a,string s){
     int c=0;
     bool ans=true;
     while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else if(s[i]==a){
            c++;
            i++;
        }
        else if(s[j]==a){
            c++;
            j--;
        }
        else {
           ans= false;
           break;
    }
     }
     if(ans) return c;
     else return INT_MAX;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=INT_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            ans = min(ans, pal(0, n - 1, ch, s));
        }
        if(ans==INT_MAX) cout<<-1<<endl;
        else{
        cout<< ans<<endl;
    }
}
    return 0;
}
