#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        int p=0;
        string a;
        cin>>n>>k>>a;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1'){
                if(i+k<a.size()){
                    if(a[i+k]=='1'){
                        a[i+k]='0';
                    }
                    else  a[i+k]='1';
                    a[i]=0;
                }
                else p++;
            }
        }
     if(p>0) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    }
}