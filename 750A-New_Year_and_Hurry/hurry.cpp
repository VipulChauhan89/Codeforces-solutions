#include<iostream>
using namespace std;

int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    k=4*60-k;
    for(int i=1;i<=n;i++)
    {
        k-=(5*i);
        ans+=((k>=0)?1:0);
    }
    cout<<ans<<endl;
    return 0;
}