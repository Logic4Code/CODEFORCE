 #include <bits/stdc++.h>
using namespace std;
 
int main()
{
 int n, k;
    cin >> n >> k;
    int count = 0;
    for(int i=1; i<=n; i++)
    {
        if (k%i==0)
        {
            if ((k/i)<=n)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
