#include<iostream>
using namespace std;

int main()
{
    int t,n,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        q=n/3;
        if(n==1)
        {
            cout<<2<<endl;
        }
        else 
        {
            cout<<((n%3)?q+1:q)<<endl;
        }
    }
    return 0;
}