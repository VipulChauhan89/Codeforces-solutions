#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> m;
    string s,ans="NO";
    int n;
    cin>>n;
    cin>>s;
    if(n>=26)
    {
        for(int i=0;i<n;i++)
        {
            m[tolower(s[i])]++;
        }
        ans=(m.size()==26)?"YES":"NO";
    }
    cout<<ans<<endl;
    return 0;
}