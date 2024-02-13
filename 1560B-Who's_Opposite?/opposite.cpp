#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int n=abs(a-b),ans=-1;
        if(a<=n*2 && b<=n*2 && c<=n*2)
        {
            ans=c+n;
            if(ans>n*2)
            {
                ans=c-n;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}