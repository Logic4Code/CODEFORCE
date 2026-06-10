#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> p, x;
    for (int i=0;i<n;i++) {
        if (a[i]>= 0) p.push_back(a[i]);
        else x.push_back(a[i]);
    }
    int j=0;
    while(j<p.size() && j<x.size() ){
        a[j]=p[j];
        a[j+1]=x[j];
        j+=2;
    }
    int k=j+1;
    while (k < p.size()) {
        a[k+=2] = p[k+=2];
    }
 int l=k+1;
    while (l < x.size()) {
        a[l+=2] = x[l+=2];
    }
  for (int i=0;i<n;i++) {
    cout<<a[i];
    
}
}