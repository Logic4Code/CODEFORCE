#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
string s;
    cin >> s;
    
    vector<char> ans;
    
    for (char ch : s) {
        if (ch == 'B' && !ans.empty()) {
            ans.pop_back();
        } else {
            ans.push_back(ch);
        }
    }
    
    cout << ans.size() <<endl;
}
}