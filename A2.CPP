#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int a;
     cin>>a;
     vector<int>b;
for (int step = 0; step < 4; ++step) {
        b.push_back(a % 256);
        a /= 256;
    }
int i=b.size();
int k=1;
long long s=0;
while(i--){
s+=b[i]*k;
k*=256;
}
cout<<s;
    return 0;
}