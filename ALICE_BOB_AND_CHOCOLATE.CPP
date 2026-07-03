#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int t1=0,t2=0,x=0,b=0,i=0,j=n-1;
    while(i<=j){
     if (t1 <= t2) {
            t1 += a[i];
            x++;
            i++;
        } 
        else {
            t2 += a[j];
            b++;
            j--;
        }
    }
    cout<<x<<" "<<b;
}