#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        string ans="YES";
        vector<bool> a(26,false);
        cin>>n>>s;
        a[s[0]-'A']=true;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                continue;
            }
            else
            {
                if(a[s[i]-'A'])
                {
                    ans="No";
                    break;
                }
                a[s[i]-'A']=true;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}