#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
       sort(b.rbegin(),b.rend());
      if(is_sorted(a.begin(), a.end()))
        {
            cout << "yes"<<endl;
         cout<<1<<" "<<1;
        }
        else if(b==a){
              cout << "yes"<<endl;
         cout<<1<<" "<<n; 
        }
       else {
          sort(b.begin(),b.end());
            int l = 0, r = n - 1;
            while (l < n && a[l] == b[l])
                l++;
            while (r >= 0 && a[r] == b[r])
                r--;
            if (l < r)
            {
                reverse(a.begin() + l, a.begin() + r + 1);
                if (a == b)
                {
                    cout << "yes" << endl;
                    cout << l + 1 << " " << r + 1;
                }
                else
                    cout << "no";
            }
            else
                cout << "no";
        }
}