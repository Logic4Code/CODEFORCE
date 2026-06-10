#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int > ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    int x;
    cin>>x;
    sort(ar.begin(),ar.end());
    for(int i=0;i<x;i++){
        int a,count=0;
        cin>>a;
        int sta=0,end=n-1,mid=(sta+end)/2;
        while(sta<=end){
            if(ar[mid]<=a){
                sta=mid+1;
                count=mid+1;
            }
            else {
                end=mid-1;
            }
            mid=(sta+end)/2;
        }
        
        cout<<count<<endl;
    }
    return 0;
}
