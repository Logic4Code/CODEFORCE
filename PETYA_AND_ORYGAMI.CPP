#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long x = ceil((2.0 * n) / k) + ceil((5.0 * n) / k) + ceil((8.0 * n) / k);

    cout << x << endl;
}