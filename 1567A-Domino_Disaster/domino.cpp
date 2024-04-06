#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str,ans="";
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='D')
            {
                ans+="U";
            }
            else if(str[i]=='U')
            {
                ans+="D";
            }
            else
            {
                ans+=str[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}