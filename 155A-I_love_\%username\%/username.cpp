#include<iostream>
using namespace std;

int main()
{
    int n,num,mn=INT_MAX,mx=INT_MIN,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(i==0)
        {
            mx=mn=num;
        }
        else
        {
            if(num>mx)
            {
                mx=num;
                ans++;
            }
            if(num<mn)
            {
                mn=num;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}