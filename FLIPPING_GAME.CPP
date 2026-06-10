#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int a1 = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) a1++;
    }

    int max1 = -1e9;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int zeros = 0;
            int ones = 0;
            
            for (int k = i; k <= j; k++) {
                if (a[k] == 0) zeros++;
                else ones++;
            }
            
            int c = zeros - ones;
            max1 = max(max1, c);
        }
    }

    cout << a1 + max1 << endl;

    return 0;
}