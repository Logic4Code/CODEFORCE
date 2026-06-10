#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ze = s.find('0');

    if (ze != std::string::npos)
    {
        s.erase(ze, 1);
    }
    else
    {
        s.pop_back();
    }
    cout << s;
}