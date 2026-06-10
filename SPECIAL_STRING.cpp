#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;

        for (int i = 0; i < (int)a.size() - 1; ) {
            if (i >= 0 && a[i] == a[i + 1]) {
                a.erase(i, 2); 
                i = max(0, i - 1);
            } else {
                i++; 
            }
        }

        if (a.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}