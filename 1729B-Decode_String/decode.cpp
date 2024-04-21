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
        string ans;
        for(int i=0;i<n;)
        {
            if(s[i+2]=='0' && s[i+3]!='0')
            {
                ans+=96+stoi(s.substr(i,2));
                i+=3;
            }
            else
            {
                ans+=96+(s[i]-'0');
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}