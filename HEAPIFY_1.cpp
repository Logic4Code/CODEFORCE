#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=-1;
        cin >> n ;
        vector<int> a;
       vector<int> b;
         for (int i = 0; i < n; i++)
        {
            int d;
            cin>>d;
            a.push_back(d);
            b.push_back(d);
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {

            int val1 = a[i];   
            int val2 = b[i];     

            
            
            int temp1 = val1;
            while (temp1 % 2 == 0) temp1 /= 2;
            
            int temp2 = val2;
            while (temp2 % 2 == 0) temp2 /= 2;

            if (temp1 != temp2) {
                count = 0; 
                break;
        }
    }
        if(count==0){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}
