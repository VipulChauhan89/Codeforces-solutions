#include<iostream>
#include<cmath>
using namespace std;

bool check(unsigned long long n)
{
    if(n>=0)
    {
        unsigned long long x=sqrt(n);
        return (x*x==n || x*x*x==n);
    }
    return false;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n;
        int a=sqrt(n),b=cbrt(n),c=sqrt(cbrt(n));
		cout<<a+b-c<<endl;
    }
    return 0;
}