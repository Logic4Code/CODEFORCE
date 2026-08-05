#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool v = true;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1] && s[i - 1] != s[i])
            {
                s.erase(s.begin() + i, s.begin() + i + 1);
                v = false;
                break;
            }
        }
        int ans = 0;
        if (!v)
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    ans++;
                }
            }
            ans++;
             cout << ans << endl;
        }
        else{
            int count=1;
            vector<int>l;
            for (int i = 0; i < s.length()-1 ; i++)
            {
                if (s[i] == s[i + 1])
                {
                  count++;
                }
                else{
                l.push_back(count);
                 count=1;
                }
            }
        l.push_back(count);
        ans=l.size();
        for (int i = 1; i < l.size()-1; i++)
        {
           if(l[i]==1){
            ans--;
            break;
           }
        }
        cout<<ans<<endl;
        }
       
    }
    return 0;
}