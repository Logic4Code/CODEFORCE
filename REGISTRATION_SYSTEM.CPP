#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<string> v;
        map<string,int> c;
        for(int i=0;i<n;i++)
        {
            string x;
            cin>>x;
            c[x]++;
           if(c[x]>1) v.push_back(x+to_string(c[x]-1));
           else v.push_back("OK");
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<endl;
        }
    }