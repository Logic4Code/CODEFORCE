#include <bits/stdc++.h>
using namespace std;
int sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int ans(int current_number, int &k) {
    if (sum(current_number) == 10) {
        k--; 
        if (k == 0) {
            return current_number; 
        }
    }   
    return ans(current_number + 1, k);
}
int main()
{
    int n;
   cin >> n;
cout<<ans(19,n);
}