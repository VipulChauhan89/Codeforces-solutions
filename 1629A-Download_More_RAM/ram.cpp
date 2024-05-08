#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ram=k;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>v[i].second;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(ram<v[i].first)
            {
                break;
            }
            ram+=v[i].second;
        }
        cout<<ram<<endl;
    }
    return 0;
}