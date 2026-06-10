#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
       for (int i = 0; i <= 2 * n; i++) {
        int d = abs(n - i);
        
        int x = n - d;

        for (int j = 0; j < d * 2; j++) {
            cout << " ";
        }

        for (int j = 0; j < x; j++) {
            cout << j << " ";
        }

        cout << x;

        for (int j = x - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << endl;
    } 
    
}