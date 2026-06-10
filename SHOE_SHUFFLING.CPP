#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        vector<int> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            p[i] = i + 1;
        }

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                swap(p[i], p[i - 1]);
            }
        }
      int x=0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == i + 1)
            {
                x=-1;
                break;
            }
        }
        if(x==-1){
            cout<<-1<<endl;
        }
        else{
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}
}
