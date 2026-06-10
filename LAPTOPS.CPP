#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<pair<int,int>>k;
  while(n--){
    int a,b;
    cin>>a>>b;
    
    k.push_back({a,b});
  }
sort(k.begin(),k.end());
bool v=true;
for (int i = 0; i <k.size()-1; i++)
{
   if(k[i].second>k[i+1].second){
    cout<<"Happy Alex"<<endl;
    v=false;
    break;
   }
}
if(v){
    cout<<"Poor Alex"<<endl;
}
     
}
