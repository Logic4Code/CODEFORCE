#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin >> n>>a>>b;
        if(a>b){
            cout<<n<<endl;
        }
        else{
            if(n*a<=b){
                cout<<1<<endl;
            }
            else{
                int x=b/a;
                int t=x+1;
                if(n%t==0){
                    cout<<n/t<<endl;
                }
                else{
                    cout<<(n/t)+1<<endl;
                }
            }
        }
    }
}