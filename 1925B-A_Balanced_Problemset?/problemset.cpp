#include<iostream>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        int ans=1;
        cin>>n>>x;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int z=n/i;
                if(z>=x)
                {
                    ans=max(ans,i);
                }
                if(i>=x)
                {
                    ans=max(ans,z);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}