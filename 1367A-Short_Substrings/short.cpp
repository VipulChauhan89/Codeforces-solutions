#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,ans;
        cin>>s;
        ans+=s[0];
        for(int i=1;i<s.length()-1;i+=2)
        {
            ans+=s[i];
        }
        ans+=s[s.length()-1];
        cout<<ans<<endl;
    }
    return 0;
}