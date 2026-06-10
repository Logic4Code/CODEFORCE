#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> num;
    for (char c : s1) {
        num[c]++;
    }

    for (char c : s2) {
        if (c == ' ') {
            continue; 
        }
        
        if (num[c] > 0) {
            num[c]--;
        } else {
            ans++;
        }
    }
    if(ans==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}