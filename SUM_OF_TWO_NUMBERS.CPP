#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin >> s;
    string x = "", y = "";
    bool a = true;
    
    for (char c : s) {
        int digit = c - '0';
        
        if (digit % 2 == 0) {
            x += to_string(digit / 2);
            y += to_string(digit / 2);
        } else {
            int low = digit / 2;
            int high = low + 1;
            
            if (a) {
                x += to_string(high);
                y += to_string(low);
            } else {
                x += to_string(low);
                y += to_string(high);
            }
            a = !a; // Toggle turn
        }
    }
    
    cout << stoi(x) << " " << stoi(y) <<endl;
}
}