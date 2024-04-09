#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[0])
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}