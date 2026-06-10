#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, k;
    if (!(cin >> n >> k)) return 0;

    if (n == 1 && k == 10)
    {
        cout << -1 << endl;
    }
    else
    {
        if (k == 10) {
            cout << 1;
            for (int i = 0; i < n - 1; i++) {
                cout << 0;
            }
        } 
        else {
            cout << k;
            for (int i = 0; i < n - 1; i++) {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}