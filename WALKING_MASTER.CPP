#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d || c-a>d-b){
            cout<<-1<<endl;
        }
        else{
            cout<<(2*(d-b))+(a-c)<<endl;
        }
    }
}