#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
    int n, s = 0;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
 for (int i = 0; i < n; i++){
    if(a[i]==b[i]){
        s++;
    }
    else{
        break;
    }
 }
 if(n==s){
    cout<< n<<endl;
 }
 else{
    cout<< 1<<endl;
 }
}
}
