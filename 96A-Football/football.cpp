#include<iostream>
using namespace std;

int main()
{
    string s,ans="NO";
    cin>>s;
    int n=s.length();
    if(n>=7)
    {
        for(int i=0;i<n-6;i++)
        {
            if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3] && s[i+3]==s[i+4] && s[i+4]==s[i+5] && s[i+5]==s[i+6])
            { 
                ans="YES";
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}