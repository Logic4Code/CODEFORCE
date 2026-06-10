#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
        string a;
        cin>>a;
        string b=a;
        string c;
        c=a;
         reverse(a.begin(),a.end());
         sort(c.begin(),c.end());
         if(c[0]==c[c.length()-1]){
           cout<<"0";   
         } 
         else if(b==a){
            cout<<a.length()-1;
         }
         else{
            cout<<a.length();
         }
}


