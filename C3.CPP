#include <bits/stdc++.h>
using namespace std;

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
int x=0;
bool ok=false;
bool ok2=false;
if(s.size()==1){
    if(s[0]=='0') cout<<-1<<endl;
    else cout<<1<<endl;
}
else{
for(int i=1;i<s.size();i++){
if(s[i]==0 && s[i-1]==0){
    x=-1;
    break;
}
if((s[i]=='+' &&s[i-1]=='-' ||s[i]=='-' &&s[i-1]=='+')&& !ok ) {
    ok=true;
    x+=2;
}
else{
if(!ok2){
    ok2=true;
    x+=1;
}
}
}
cout<<x<<endl;
    }
}
}