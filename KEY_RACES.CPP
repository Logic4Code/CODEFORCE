#include <bits/stdc++.h>
using namespace std;
int main(){
         int s,a,b,c,d;
    cin >> s >>a>>b>>c>>d; 
    if((s*a)+(2*c)>(s*b)+(2*d)){
        cout<<"Second";
    }
    else if((s*a)+(2*c)<(s*b)+(2*d)){
        cout<<"First";
    }
    else{
        cout<<"Friendship";
    }

    }
