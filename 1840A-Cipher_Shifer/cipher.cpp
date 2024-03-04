#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s,ans="";
        cin>>n>>s;
        char c=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]==c)
            {
                ans+=c;
                c=s[i+1];
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}