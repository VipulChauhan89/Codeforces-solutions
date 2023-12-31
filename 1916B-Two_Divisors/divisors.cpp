#include<iostream>
#include<algorithm>
using namespace std;
 
unsigned long long gcd(unsigned long long a,unsigned long long b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int t;
    unsigned long long a,b,mn,mx;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        mn=min(a,b);
        mx=max(a,b);
        if(mn==1)
        {
            cout<<mx*mx<<endl;
        }
        else if(mx%mn!=0)
        {
            cout<<(a*b)/gcd(a,b)<<endl;
        }
        else
        {
            cout<<(mx/mn)*mx<<endl;
        }
    }
    return 0;
}