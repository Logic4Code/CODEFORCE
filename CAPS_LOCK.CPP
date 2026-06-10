#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int c=0;

        for (int i = 1; i < a.length(); i++)
        {
            if (a[i] >='a' && a[i]<='z')
            {
          c++;
            }
        }
        if(c>0){
   std:: cout<<a;
}
else{
    for (int i = 0; i < a.length(); i++)
        {
            if (a[i] >='a' && a[i]<='z')
            {
          a[i]=a[i]-32;
            }
            else{
                a[i]=a[i]+32;
            }
        }
        cout<<a;
}
}
