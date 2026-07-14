#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
    cin >> n;
    int c=0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) {
            c++;
        }
    }
    if (c>0) {
        cout << "First";
    } else {
        cout << "Second";
    }
}