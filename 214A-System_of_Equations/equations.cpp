#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int ans=0;
    cin>>n>>m;
    for(int a=0;a*a<=n && a<=m;a++)
    {
        int b=n-a*a;
        if(a+b*b==m)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}