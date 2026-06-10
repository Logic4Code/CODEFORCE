 #include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string a;
    cin>>a;
   vector<char> x;
    int count = 0;
    for(int i=0; i<a.length(); i++)
    {
        char c = tolower(a[i]);
     if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            x.push_back('.');
            x.push_back(c);
        }
      }

        for(int i=0; i<x.size(); i++){
            cout<<x[i];
        }

}
