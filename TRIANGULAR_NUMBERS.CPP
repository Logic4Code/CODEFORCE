#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n,z=0;
    cin>>n;
   for (int i = 1; i <=500 ; i++)
        {
         int t= i*(i+1);
         t=t/2;
         if(t==n){
           z=1 ;
            break;
        }
        if(t>n){
            break;
        }
    }
    if(z>0){
            cout<<"YES";
         }
         else{
            cout<<"NO";
         }
}