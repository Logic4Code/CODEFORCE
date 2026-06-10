#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
   int m=0,c=0;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin >> n>>q;
        if(n>q){
            m++;
        }
        else if(q>n){
            c++;
        }  
    }
    if(m>c){
        cout<<"Mishka"<<endl;
    }
    else if(c>m){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}
