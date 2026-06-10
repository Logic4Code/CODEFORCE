#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int n;
    cin >> n ;
    
    vector<int> a(n);
     vector<int> b;
    vector<int> c;


         int k=INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        k=max(k,a[i]);
    }
        for (int i = 0; i < n; i++) {
           if(a[i]!=k){
             b.push_back(a[i]);
           }
           else{
            c.push_back(k);
           }
    }
    if(b.size()==0){
        cout<<-1<<endl;
    }
    else{
          cout << b.size() << " " << c.size() << endl;

        for (int i = 0; i < b.size(); i++) {
             cout<<b[i]<<" ";
    }
    cout<<endl;
     for (int i = 0; i < c.size(); i++) {
             cout<<c[i]<<" ";
    }
    cout<<endl;
}
}
}