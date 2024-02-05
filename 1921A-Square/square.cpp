#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        int ans=1;
        vector<pair<int,int>> a(4);
        for(int i=0;i<4;i++)
        {
            cin>>x>>y;
            a[i]={x,y};
        }
        if(a[0].first==a[2].first)
        {
            ans*=abs(a[0].second-a[2].second);
        }
        else
        {
            ans*=abs(a[0].first-a[2].first);
        }
        if(a[1].first==a[3].first)
        {
            ans*=abs(a[1].second-a[3].second);
        }
        else
        {
            ans*=abs(a[1].first-a[3].first);
        }
        cout<<ans<<endl;
    }
    return 0;
}