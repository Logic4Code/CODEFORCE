#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int count=0,a=0;
         for (int i = 0; i < n.length(); i++)
        {
            if(n[i]=='0'){
               count++;
            }
            else{
               a++;
            }
        }
        if(min(a,count)%2!=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
}