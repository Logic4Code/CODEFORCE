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
        int n,sum=0,c=0,d=0;
        cin >>n;
       int a[n];
       for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum=sum+a[i];
            if(a[i]%2!=0){
                c++;
            }
            else{
                d++;
            }
        }
        if(sum%2!=0) cout<<"YES"<<endl;
        else {
            if(d>0&&c!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }     
    }
    return 0;
}