#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i;
        for (i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[min] > a[j])
                {
                    min = j;
                }
            }
            swap(a[min], a[i]);
        }

        cout << (a[n - 1] - '0') * n<<endl;
    }
}