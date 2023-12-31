#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n;
        for(int i=1;i<=9;i++)
        {
            for(unsigned long long j=i;j<=n;j=(j*10)+i)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}