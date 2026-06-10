#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x=0;
        cin >> n;
        vector<int> d(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> d[i];
        }

        std::vector<int> a(n);
        a[0] = d[0]; 

        for (int i = 1; i < n; ++i)
        {
            if (d[i] != 0 && a[i - 1] - d[i] >= 0)
            {
                x++;
            }
            a[i] = a[i - 1] + d[i];
        }
        if(x>0) cout<<-1<<endl;
        else{
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] <<" ";
        }
        cout <<endl;
    }
}
}