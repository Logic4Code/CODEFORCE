#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> ma;
    int ok = false;
    for(int i = 0; i < 6; ++i) {
        int x;
        cin >> x;
        ma[x] ++;
        if(ma[x] >= 4) {
            ok = x;
        }
    }
    if(!ok) {
        cout << "Alien";
    }
    else if(ma[ok] == 6) {
        cout << "Elephant";
    }
    else if(ma[ok] == 5) {
        cout << "Bear";
    }
    else if(ma.size() == 2) {
        cout << "Elephant";
    }
    else cout << "Bear";
}