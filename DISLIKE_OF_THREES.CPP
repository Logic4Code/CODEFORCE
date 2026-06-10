#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a;
        int count = 0;
        int i = 1;
        
        while (true) {
            if (i % 3 != 0 && i % 10 != 3) {
                count++;
                if (count == a) {
                    cout << i << "\n";
                    break;
                }
            }
            i++;
        }
    }
    
    return 0;
}