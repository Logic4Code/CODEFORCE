#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  string t;
  cin>>s>>t;
  string a;
  string b;
  int i=0;
  while(s[i]!='|'){
    a.push_back(s[i]);
    i++;
  }
  i++;
  while(i<s.size()){
    b.push_back(s[i]);
    i++;
  }
for (char c : t) {
        if (a.size() <= b.size()) {
            a.push_back(c);
        } else {
            b.push_back(c);
        }
    }
    if (a.size() == b.size()) {
        cout << a << "|" << b;
    } else {
        cout << "Impossible";
    }
}