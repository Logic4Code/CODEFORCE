#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        cin >> n ;
        int a[n];
         for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(a[i]==67){
                count++;
            }
        }
        if(count>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}