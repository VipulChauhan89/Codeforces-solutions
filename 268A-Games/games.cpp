#include<iostream>
#include<unordered_map>
using namespace std;

int  main()
{
    unordered_map<int,int> home,guest;
    int n,h,a,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h>>a;
        home[h]++;
        guest[a]++;
    }
    for(auto &i:home)
    {
        if(guest.find(i.first)!=guest.end())
        {
            while(home[i.first]--)
            {
                ans+=guest[i.first];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}