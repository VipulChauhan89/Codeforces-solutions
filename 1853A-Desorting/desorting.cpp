#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        if(!is_sorted(v.begin(),v.end()))
        {
            cout<<0<<endl;
        }
        else
        {
            int d=INT_MAX;
            for(int i=1;i<n;i++)
            {
                int r;
                r=v[i]-v[i-1];
                if(r<d)
                {
                    d=r;
                }
            }
            int ans=(d/2)+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}