#include<iostream>
#include<cmath>
using namespace std;

string isPerfectSquare(unsigned long long num)
{
    unsigned long long x=sqrt(num);
    return (x*x==num)?"YES":"NO";
}
int  main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        unsigned long long sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            sum+=num;
        }
        cout<<isPerfectSquare(sum)<<endl;

    }
    return 0;
}