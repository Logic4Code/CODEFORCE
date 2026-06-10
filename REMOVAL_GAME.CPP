#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int n, b = 0,d=0;
        cin >> n;
         vector<int> a(n);
        vector<int> c(n);
        for (int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n ; i++)
        {
            cin >> c[i];
        }
         for (int i = 0; i < n ; i++){
            if(a[i]==c[i]){
                b++;
            }
            if(a[i]==c[n-i-1]){
            d++;
            }
         }
         if(b==n || d==n){
            cout<<"Bob"<<endl;
         }
         else{
            cout<<"Alice"<<endl;
         }
    }
}