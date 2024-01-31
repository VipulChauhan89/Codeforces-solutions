#include<iostream>
#include<unordered_map>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int sum=0;
        char c;
        unordered_map<char,int> m;
        for(int i=1;i<=26;i++)
        {
            cin>>c;
            m[c]=i;
        }
        cin>>s;
        for(int i=1;i<s.length();i++)
        {
            sum+=abs(m[s[i-1]]-m[s[i]]);
        }
        cout<<sum<<endl;
    }
    return 0;
}