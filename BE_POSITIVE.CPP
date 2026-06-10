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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                a[i]=1;
              count=count+1;
            }
        }
        int p=1;
        for (int i = 0; i < n; i++)
        {
            p=p*a[i];
        }
        if(p<0){
            count+=2;
        }
        cout<<count;
    }
}