#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=0;
        unordered_set<string> st;
        string s;
        cin>>n>>s;
        for(int i=1;i<n;i++)
        {
            string ss=to_string(s[i-1])+to_string(s[i]);
            if(st.find(ss)==st.end())
            {
                st.insert(ss);
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}