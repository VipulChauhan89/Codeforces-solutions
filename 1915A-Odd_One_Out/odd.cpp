#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==b && b!=c)
        {
            cout<<c<<endl;
        }
        else if(a==c && b!=c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}