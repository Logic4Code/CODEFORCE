#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        map<string, int> score;
    string name;

    for (int i = 0; i < n; ++i) {
        cin >> name;
        score[name]++;
    }
    string winner;
    int maxg = -1;

for (auto const& i : score) {

    if ( i.second > maxg) {
            maxg= i.second ;
            winner = i.first;
        }
    }

    cout << winner << endl;

}