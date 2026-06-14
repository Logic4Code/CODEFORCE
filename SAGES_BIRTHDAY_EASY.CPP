#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << (n - 1) / 2 << "\n";

    int left = 0;          
    int right = n - 1;     
    int limit = n / 2;     

    while (right >= limit) {
        cout << a[right] << " ";
        right--;
        
        if (left < limit) {
            cout << a[left] << " ";
            left++;
        }
    }
}