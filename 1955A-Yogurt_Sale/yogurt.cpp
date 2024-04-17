#include<iostream>
using namespace std;

int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if(2*a<=b)
        {
            cout<<n*a<<endl;
        }
        else
        {
            if(n&1)
            {
                cout<<n/2*b+a<<endl;
            }
            else
            {
                cout<<n/2*b<<endl;
            }
        }
    }
    return 0;
}