#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s1,s2,ans="YES";
        cin>>n>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
            {
                continue;
            }
            else if(s1[i]=='G' && s2[i]=='B' || s1[i]=='B' && s2[i]=='G')
            {
                continue;
            }
            else
            {
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}