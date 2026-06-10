#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0,c=0,b=0,d=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 for (int i = 0; i < n; i++){
    if(a[i]==4){
        s++;
    }
    if(a[i]==2){
        c++;
    }
     if(a[i]==3){
        b++;
    }
    if(a[i]==1){
        d++;
    }   
}
 if(b>=d){
    s=s+b;
    d=0;
}
if(d>b){
    d=(d-b);
    s=s+b;
}
 s=s+(c/2);
if(c%2!=0){
        s += 1;
        d = max(0, d - 2);
    }
    if (d > 0) {
        s += (d + 3) / 4; 
    }
    cout<<s;

}
