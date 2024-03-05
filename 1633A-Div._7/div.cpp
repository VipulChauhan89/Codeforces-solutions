#include<iostream>
using namespace std;

int main()
{
    int t,n,srem,b,rem;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            srem=n%7;
            b=7-srem;
            rem=n%10;
            if(rem+b<10)
            {
                n+=b;
            }
            else
            {
                n-=srem;
            }
            cout<<n<<endl;
        }
    }
    return 0;
}