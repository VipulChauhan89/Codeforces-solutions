#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        int l=0,r=s.length()-1,ans=n;
        while(l<=r)
        {
            if((s[l]!=s[r]))
            {
                ans-=2;
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}