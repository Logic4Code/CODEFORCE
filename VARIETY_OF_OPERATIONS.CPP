#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int a,b;
        cin >> a>>b;
        int c= abs(a-b);
        if(c%2!=0){
            cout<<-1<<endl;
        }
        else{
            if(c==0 ){
            if( a==0){
                cout<<0<<endl;
            }
            else if(a==b){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
            else{
            cout<<2<<endl;
            }
        }
    }
}
