#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 1;
    while (count <= n)
    {
        for (int i = 0; i < n; i++)
        {
            int k = a[i] % 2;
            if (a[i] == 2)
            {
                cout << "2" << endl;
            }
            else if (a[i] == 3)
            {
                cout << "3" << endl;
            }
            else
            {
                cout << k << endl;
            }
        }
        count++;
        break;
    }
}