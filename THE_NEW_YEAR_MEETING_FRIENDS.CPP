#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>z;
    z.push_back(a);
    z.push_back(b);
    z.push_back(c);
   sort(z.begin(),z.end());
   cout<<(z[1]-z[0])+(z[2]-z[1])<<endl;
}