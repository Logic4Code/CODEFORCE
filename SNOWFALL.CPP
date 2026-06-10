 #include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
       vector<int> by3, neither, by2, by6;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 6 == 0){
                by6.push_back(x);
            }
            else if (x % 3 == 0){
                by3.push_back(x);
            }
            else if (x % 2 == 0){
                by2.push_back(x);
            }
            else{
                neither.push_back(x);
            }
        }

        
        for (int i = 0; i < by3.size(); i++)
        {
            cout << by3[i] << " ";
        }
        for (int i = 0; i < neither.size(); i++)
        {
            cout << neither[i] << " ";
        }
       for (int i = 0; i < by2.size(); i++)
        {
            cout << by2[i] << " ";
        }
       for (int i = 0; i < by6.size(); i++)
        {
            cout << by6[i] << " ";
        }
       
       
        cout << "\n";
    }
}