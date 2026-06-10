#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(80<=a<=100 && 80<=a<=100 && 80<=a<=100 ){
    if(abs(a-b)>=10 || abs(b-c)>=10 ||abs(c-a)>=10 ){
        cout<<"check again";
    }
    else{
        if (a > b) std::swap(a, b);
    if (a > c) std::swap(a, c);
    if (b > c) std::swap(b, c);
    cout<<"final "<< b;
    }
}
}