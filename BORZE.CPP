#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for (int i = 0; i < a.length(); i++)
    {
       if(a[i]=='.'){
        cout<<0;
       }
       else if(a[i]=='-' && a[i+1]=='.'){
        cout<<1;
        i++;
       }
       else{
        cout<<2;
        i++;
       }
    }
}
