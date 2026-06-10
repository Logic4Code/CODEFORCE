#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    cin >> x;
    if (x%2!=0)
    {
        for(int i=1 ; i<x; i++)
        {
            if (i%2==0)
            {
                cout << "I love that " ;
            }
            else
            {
                cout << "I hate that " ;
            }
        }
        cout << "I hate it" << endl;
    }
    else
    {
        for(int i=1 ; i<x; i++)
        {
            if (i%2==0)
            {
                cout << "I love that " ;
            }
            else
            {
                cout << "I hate that " ;
            }
        }
        cout << "I love it" << endl;
    }
}