#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n>>m>>k;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]+b[j]<=k)
                {
                    ans++;
                }
                else 
                {
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}