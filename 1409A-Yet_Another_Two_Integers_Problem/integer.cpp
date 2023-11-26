#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int diff=abs(a-b);
        int div=diff/10,mod=diff%10;
        int ans=div;
        if(mod>0)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}