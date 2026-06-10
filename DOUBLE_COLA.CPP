#include <bits/stdc++.h>
using namespace std;
int main()
{
long long n;
   cin >> n;

    vector<string> a = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    n--; 
    while (n >= 5) {
        n = (n - 5) / 2;
    }
    std::cout << a[n];
}