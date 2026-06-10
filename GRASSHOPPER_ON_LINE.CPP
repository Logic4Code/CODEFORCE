#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if(a%b==0  ){
            cout<<2<<endl;
            cout<<a-1<<" "<<1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<a<<endl;
        }
         
    }
}