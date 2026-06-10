#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin>>a;
       if((a+1)%3==0 || (a-1)%3==0){
        cout<<"First"<<endl;
       }
       else{
        cout<<"Second"<<endl;
       }
    }
}