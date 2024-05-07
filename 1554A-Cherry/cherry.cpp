#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        unsigned long long pre=0,ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            pre=pre*x;
            ans=max(ans,pre);
            pre=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}