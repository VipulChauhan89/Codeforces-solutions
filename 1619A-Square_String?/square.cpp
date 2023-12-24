#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,ans="YES";
        cin>>s;
        if(s.length()%2==1)
        {
            ans="NO";
        }
        else
        {
            int n=s.length()/2;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=s[n+i])
                {
                    ans="NO";
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}