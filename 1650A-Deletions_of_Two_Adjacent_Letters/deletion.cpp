#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,ans="NO";
        char c;
        cin>>s>>c;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                int l=i,r=s.length()-1-i;
                if(l%2==0 && r%2==0)
                {
                    ans="YES";
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}