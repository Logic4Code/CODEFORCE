#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(is_sorted(a.begin(),a.end())){
      cout<<"YES"<<endl;  
    }
    else{
      int y = -1; 
    int p=0;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        
        if (x >= 10) {
            int tens = x / 10;
            int ones = x % 10;
            
            if (tens >= y && ones >= tens) {
                y = ones; 
            } 
            else if (x >= y) {
                y = x; 
            } 
            else {
                cout << "NO"<<endl;
                p++;
                break;
            }
        } 
        else { 
            if (x >= y) {
                y = x;
            } else {
                cout << "NO"<<endl;
                p++;
                break;
            }
        }
    }
    
    if(p==0)cout << "YES"<<endl;
}
    }
}