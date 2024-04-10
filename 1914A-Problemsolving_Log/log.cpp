#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        unordered_map<char,int> m;
        string s;
        cin>>n>>s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
            if(m[s[i]]==s[i]-'A'+1)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}