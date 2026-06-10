#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n,a=0;
    cin >> n ;
    while(n>=0){
        if(n==2){
            a=a-1;
        }
        if(n>0){
            n=n-1;
            a++;
        }
        if(n>1){
            n=n-2;
            a++;
        }
        if(n==0){
            break;
        }
        
    }
    cout<<a;
}