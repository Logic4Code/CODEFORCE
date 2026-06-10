#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, count = 0;
        cin >> n;
        vector<long long> a;
        if(n%2!=0){
            cout<<"YES"<<endl;
        }
        else{
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                a.push_back(i);
            }
        }
        for (int i = 0; i<a.size(); i++)
        {
            if (a[i] % 2 != 0)
            {
                count++;
            }
            if (count > 0)
            {
                break;
            }
        }

        if (count > 0)
        {
            cout << "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
}