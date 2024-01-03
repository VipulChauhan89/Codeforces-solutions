#include<iostream>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>a>>b;
        if(b==a)
        {
            cout<<0<<endl;
            continue;
        }
        if(b<a)
        {
            ans+=((a-b)%2!=0)?2:1;
        }
        else if(b>a)
        {
            ans+=((b-a)%2!=1)?2:1;
        }
        cout<<ans<<endl;
    }
    return 0;
}