#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b % a != 0) {
        cout << -1 << endl;
    }
else{
    int d = b / a; 
    int steps = 0;

    while (d % 2 == 0) {
        d /= 2;
        steps++;
    }

    while (d % 3 == 0) {
        d /= 3;
        steps++;
    }

    if (d == 1) {
        cout << steps << endl;
    } else {
        cout << -1 << endl;
    }
}
}