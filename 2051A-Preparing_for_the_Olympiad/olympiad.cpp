#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        long long ans=0;
        cin>>n;
        vector<int> A(n),B(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>B[i];
        }
        for(int i=1;i<n;i++)
        {
            ans+=(A[i-1]-B[i]<=0)?0:A[i-1]-B[i];
        }
        ans+=A[n-1];
        cout<<ans<<endl;
    }
    return 0;
}
