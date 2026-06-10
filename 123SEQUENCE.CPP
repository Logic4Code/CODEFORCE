#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x=0;
    int y=0;
    int z=0;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
      for(int i=0;i<t;i++){
        if(a[i]==1){
            x++;
        }
         if(a[i]==2){
            y++;
        }
         if(a[i]==3){
            z++;
        }
}
int b=max(x,y);
cout<<t-max(z,b);
}