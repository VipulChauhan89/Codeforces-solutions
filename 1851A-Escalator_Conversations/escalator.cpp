#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,m,k,H;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k>>H;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int d=abs(H-v[i]);
            if(d<=(m-1)*k && d%k==0 && v[i]!=H)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}