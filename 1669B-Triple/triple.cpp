#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int t,num,n;
    cin>>t;
    while(t--)
    {
        int ans=-1;
        unordered_map<int,int> m;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            m[num]++;
        }
        for(auto i:m)
        {
            if(i.second>=3)
            {
                ans=i.first;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}