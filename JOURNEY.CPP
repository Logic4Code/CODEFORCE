#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b, c;
        cin >> n;
        cin >> a >> b >> c;
        int count = 0;
         while(n>0)
        {
            if (n > 0)
            {
                n = n - a;
                count++;
            
            if (n > 0)
            {
                n = n - b;
                count++;
            
            if (n > 0)
            {
                n = n - c;
                count++;
            }
        }
    }
        }
    std:: cout<<count<<endl;
    }
}