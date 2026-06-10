#include <bits/stdc++.h>
using namespace std;
bool nox(const vector<int>& a, int x) {
    int l = 0;
    int r = a.size() - 1;

    while (l< r) {
        if (a[l] == x) {
            l++;
        } else if (a[r] == x) {
            r--;
        } else if (a[l] == a[r]) {
            l++;
            r--;
        } else {
            return false; 
        }
    }
    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n,p=0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    while (l< r) {
        if (a[l] == a[r]) {
            l++;
            r--;
        } else {
            if (nox(a, a[l]) || nox(a, a[r])) {
                p=0;
                break;
            } else {
                p++;
                break;
            }
        }
    }
  if(p==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
    }
}