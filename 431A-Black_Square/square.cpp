#include<iostream>
using namespace std;

int main()
{
    string s;
    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d>>s;
    for(auto i:s)
    {
        if(i=='1')
        {
            ans+=a;
        }
        else if(i=='2')
        {
            ans+=b;
        }
        else if(i=='3')
        {
            ans+=c;
        }
        else
        {
            ans+=d;
        }
    }
    cout<<ans<<endl;
    return 0;
}