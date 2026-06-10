#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
  string s;
    cin >> s;
    
    
    int n = stoi(s);
    
    int root = round(sqrt(n));
    

    if (root * root == n) {
        cout << root << " " << 0 << endl;
    } else {
        cout << -1 << endl;
    }
    }
    return 0;
}