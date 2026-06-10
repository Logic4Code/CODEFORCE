#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
        string a;
        cin>>a;
        long long b;
        b=stoll(a);
        
     reverse(a.begin(),a.end());
     int count=0;
  for(int i=0;i<a.length();i++){

    if(a[i]=='0'){
        count++;
    }
    else{
        break;
}
}
b=b/pow(10,count);
  string c = to_string(b);
  string d=c;
  reverse(d.begin(),d.end());
  if(d==c){
cout<<"YES";
  }
  else{
    cout<<"NO";
  }
    }
