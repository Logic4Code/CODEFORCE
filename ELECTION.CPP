#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3],b[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
           b[i]=a[i];
        }
         sort(a,a+3);
                for(int i=0;i<3;i++){
                   if (b[i] == a[2]) {
                if (a[2] == a[1]) {
                    cout << 1<<endl; 
                } else {
                    cout << 0<<endl; 
                }
            } else {
                cout << a[2] - b[i] + 1<<endl;
            }
        }
    }
}
