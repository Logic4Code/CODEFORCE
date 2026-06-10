#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int count = 0,b=0;
            int i = n.length() - 1;

        if (n[n.length() - 1] == '0' && n[n.length() - 2] == '0' || n[n.length() - 1] == '0' && n[n.length() - 2] == '5' || n[n.length() - 1] == '5' && n[n.length() - 2] == '2' || n[n.length() - 1] == '5' && n[n.length() - 2] == '7')
        {
            cout << "0" << endl;
        }
        else if (n[i] == '5'){
        
            while (n[i-1] != '2' && n[i-1] != '7')
            {
                count++;
                i--;
                if(i<0){
                    break;
                }
            }
            cout<<count<<endl;
        }
        int j=n.length() - 1;
        int a=0;
      while(n[j] != '0' && n[j-1] != '0'){
        a++;
        j--;
      }
      cout<<a+1<<endl;
      int k=n.length() - 1;
      while(n[j] != '0' && n[j-1] != '5'){
        b++;
        k--;
      }
      cout<<min(b,count-1)<<endl;
    }
}
