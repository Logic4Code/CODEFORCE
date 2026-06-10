#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int open = 0, close = 0;
        for (char c : s)
        {
            if (c == '(')
                open++;
            else
                close++;
        }

        if (open == close){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}