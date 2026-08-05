#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        string s1, s2;
        cin >> s1 >> s2;
        bool v = true;
        ll v1 = a - 1;
        ll count1 = 0, count2 = 0,count11=0,count22=0;
        for (int i = 0; i < a; i++)
        {
           if(s1[i]=='1'){
             if(i%2==0){
                count1++;
             }
             else{
                count2++;
             }
           }
           if(s2[i]=='1'){
             if(i%2==0){
                count11++;
             }
             else{
                count22++;
             }
           }
           
        }
        if(count1==count11&&count2==count22){
           
            vector<ll>l1,l2,l3,l4;
            for (int i = 0; i < a; i++)
            {
                if(s1[i]=='1'){
                    if(i%2==0){
                        l1.push_back(i);
                    }
                    else{
                        l2.push_back(i);
                    }
                }
                if(s2[i]=='1'){
                    if(i%2==0){
                        l3.push_back(i);
                    }
                    else{
                        l4.push_back(i);
                    }
                }
            }
            ll ans=0;
           
            for (int i = 0; i < l1.size(); i++)
            {
                ans=ans+(abs(l1[i]-l3[i])/2);
            }
            for (int i = 0; i < l2.size(); i++)
            {
                ans=ans+(abs(l2[i]-l4[i])/2);
            }
              reverse(l1.begin(),l1.end());
              reverse(l2.begin(),l2.end());
              ll ans1=ans;
              ans=0;
               for (int i = 0; i < l1.size(); i++)
            {
                ans=ans+(abs(l1[i]-l3[i])/2);
            }
            for (int i = 0; i < l2.size(); i++)
            {
                ans=ans+(abs(l2[i]-l4[i])/2);
            }
            cout<<min(ans1,ans)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
}}