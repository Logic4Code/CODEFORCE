#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
  {
    int length;
cin >> length;
string a;
a.reserve(length);
cin >> a;
    int count=0;
    for(int i=0;i<length;i++){
        if(a[i]=='1'){
           a[i]='0' ;
                 for(int i=0;i<a.length();i++){
                    if(a[i]=='1'){
                        count++;
                    }
                 }
                 a[i]='1';
        }
        else{
            a[i]='1';
             for(int i=0;i<a.length();i++){
                    if(a[i]=='1'){
                        count++;
                    }
                 }
                 a[i]='0';
        
        }
  }
cout<<count;
}
}
   
   