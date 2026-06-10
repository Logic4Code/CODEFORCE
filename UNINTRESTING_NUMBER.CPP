#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      string n;
    cin >> n;

    long long s = 0,a=0;
    int c2 = 0;
    int c3 = 0;

      for (int i = 0; i < n.length(); i++){
        s=s+(n[i]-'0');
        if (n[i]== '2') c2++;
        if (n[i] == '3') c3++;
    }
  for (int i = 0; i <=c2; ++i) {
        for (int j = 0; j <= c3; ++j) {
            if ((s + i * 2 + j * 6) % 9 == 0) {
                a=1;
            }
        }
    }
    if(a>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}