#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
   int h,m;
   cin >>h>>m;
   int time= (h*60)+m;
   int left= 1440- time;
   cout<<left<<endl;
   }
 
    }
