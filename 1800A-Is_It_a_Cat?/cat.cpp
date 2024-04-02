#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    string meow="meow";
    while(t--)
    {
        cin>>n;
        int c=0;
        string s,cat="meow",s1;
        cin>>s;
        for(int i=0; i<s.size(); ++i)
        {
            s[i]=tolower(s[i]);
            if(s1.empty() || s1.back()!=s[i])
            {
                s1.push_back(s[i]);
            }
        }
        cout<<((cat==s1)?"YES":"NO")<<endl; 
    }
    return 0;
}