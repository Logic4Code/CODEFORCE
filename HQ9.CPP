#include <bits/stdc++.h>
using namespace std;
int main(){
     string a;
     cin >>a;
    if (a.find("H") != string::npos || a.find("Q") != string::npos || a.find("9") != string::npos || a.find("+") != string::npos) {
        cout << "YES" << endl;
    }
    else{
         cout<< "NO";
    }
}
