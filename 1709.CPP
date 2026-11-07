#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>& b, int n,int x, vector<pair<int, int>>& op)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                swap(b[j], b[j + 1]);
                op.push_back({x, j + 1});
            }
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> op;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, n,1,op);
        sort(b, n,2,op);
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                swap(a[i], b[i]);
                op.push_back({3, i + 1});
            }
        }
        sort(a, n,1,op);
        sort(b, n,2,op);
        cout << op.size() << "\n";
        for (int i = 0; i < op.size(); i++)
        {
            cout << op[i].first << " " << op[i].second << "\n";
        }
    }
    return 0;
}