#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
   int n;
   cin >>n;
   if(n==3){
    cout<<"2 "<<"1 "<<"3";
   }
    else if(n==6){
    cout<<"3 "<<"6 "<<"2 "<<"5 "<<"1 "<<"4";
   }
       else{ for (int i = 2 ; i <= n; i++)
        {
          if(i==n){
              cout<<"1 ";
}
           else{ 
 cout<< i<<" ";
}
    }
    cout<<n;
}
    cout<<endl;
   }
 
    }
