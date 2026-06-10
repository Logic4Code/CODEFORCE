#include <iostream>
#include <math.h>
using namespace std;
int main()
{
        int a,b,c;
        cin>>a>>b>>c;
            if(abs(a)+abs(b)<=c && (c-(abs(a)+abs(b)))%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
