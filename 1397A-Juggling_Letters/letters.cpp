#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s,ans="NO";
        cin>>n;
        int N=n;
        map<char,int>mp;
        while(N--)
        {
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                mp[s[i]]++;
            }

        }
        for(auto it=mp.begin();it!= mp.end();it++)
        {
            if(it->second%n==0)
            {
                ans="YES";
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