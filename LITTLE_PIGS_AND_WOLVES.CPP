#include <bits/stdc++.h>
using namespace std;
int main(){
int n, m;
char s[105][105];
cin >> n >> m;
 int c=0;
for (int i = 0; i < n; i++)
    cin >> s[i];
 
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (s[i][j] == 'W') {
                int p = 0; 
                if (j + 1 < m && s[i][j + 1] == 'P' && p == 0) { 
                    c++; 
                    s[i][j + 1] = '.'; 
                    p++; 
                }
                if (i + 1 < n && s[i + 1][j] == 'P' && p == 0) { 
                    c++; 
                    s[i + 1][j] = '.'; 
                    p++; 
                }
                if (j - 1 >= 0 && s[i][j - 1] == 'P' && p == 0) { 
                    c++; 
                    s[i][j - 1] = '.'; 
                    p++; 
                }
                if (i - 1 >= 0 && s[i - 1][j] == 'P' && p == 0) { 
                    c++; 
                    s[i - 1][j] = '.'; 
                    p++; 
                }
        }
    }
}
cout << c ;
}