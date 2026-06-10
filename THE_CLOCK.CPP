#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int total_mins)
{
    int h = total_mins / 60;
    int m = total_mins % 60;
    int h1 = h / 10, h2 = h % 10;
    int m1 = m / 10, m2 = m % 10;
    return (h1 == m2 && h2 == m1);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int x;
        cin >> s >> x;

        int hr = stoi(s.substr(0, 2));
        int mi = stoi(s.substr(3, 2));

        int st = hr * 60 + mi;
        int cr = hr * 60 + mi;

        set<int> palin;

        while (true)
        {
            if (isPalindrome(cr))
            {
                palin.insert(cr);
            }

            cr = (cr + x) % 1440;

            if (cr == st)
            {
                break;
            }
        }

        cout << palin.size() << endl;
    }
}
