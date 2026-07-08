#include <bits/stdc++.h>
using namespace std;
int main(){
int n, m;
char c,s[105][105];
set<char> se;
cin >> n >> m >> c;

for (int i = 0; i < n; i++)
    cin >> s[i];

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (s[i][j] == c) {
            if (j + 1 < m && s[i][j + 1] != c && s[i][j + 1] != '.') se.insert(s[i][j + 1]);
            
            if (i + 1 < n && s[i + 1][j] != c && s[i + 1][j] != '.') se.insert(s[i + 1][j]);
            
            if (j - 1 >= 0 && s[i][j - 1] != c && s[i][j - 1] != '.') se.insert(s[i][j - 1]);
            
            if (i - 1 >= 0 && s[i - 1][j] != c && s[i - 1][j] != '.') se.insert(s[i - 1][j]);
        }
    }
}
cout << se.size() ;
}