#include <bits/stdc++.h>
using namespace std;

int main()
{
        int x,y,a,b;
        cin >> x>>y>>a>>b;
        if(x==a){
            int z = abs(y - b);
            cout<<x+z<<" "<<y<<" "<<a+z<<" "<<b;
        }
         else if(y==b){
             int z = abs(x-a);
            cout<<x<<" "<<y+z<<" "<<a<<" "<<b+z;
        }
        else if(abs(x-a)==abs(y-b) && x!=a && y!=b){
            cout<<x<<" "<<b<<" "<<a<<" "<<y;
        }
        else{
            cout<<-1;
        }
}

