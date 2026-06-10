#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0;
    cin >> n;
   vector<int> d(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> d[i];
    }
    int i=0;
   while(s<n){
    int j = i % 7; 
        s = s + d[j];
        if (s >= n) {
            cout << j + 1 << endl;
            break;
        }
        i++;
   }
  
}