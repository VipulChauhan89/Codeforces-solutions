#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,num,ans=0,prev=-1,mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(prev<num)
        {
            mx++;
            ans=max(ans,mx);
        }
        else
        {
            mx=1;
        }
        prev=num;
    }
    cout<<ans<<endl;
    return 0;
}