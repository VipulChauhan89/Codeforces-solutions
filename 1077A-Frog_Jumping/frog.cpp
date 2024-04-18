#include<iostream>
using namespace std;

int main()
{
    long long t,a,b,k,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            d=k/2;
        }
        else
        {
            d=(k/2)+1;
        }
        cout<<((d*a)-((k-d)*b))<<endl;
    }
    return 0;
}