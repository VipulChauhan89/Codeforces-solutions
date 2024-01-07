#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,s[i]-'a'+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}