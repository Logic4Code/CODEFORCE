#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    vector<int> a;
    if (s1.length() != s2.length())
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i]!= s2[i])
            {
                a.push_back(i);
            }
        }
        if (a.size() != 2)
        {
            cout << "NO" << endl;
        }
        else{
            swap(s1[a[0]],s1[a[1]]);
                if(s1==s2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
