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
    cin >> n;
    int count=0;
    int b=1;
    int a=n-1;
    while(a>0){
        b=n-a;
        if(b<0){
            break;
        }
        a--;
        count++;
    }
 cout<<count<<endl;
}
    }
   
