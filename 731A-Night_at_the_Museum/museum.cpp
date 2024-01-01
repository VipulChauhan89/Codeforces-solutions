#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int ans=0;
    char prev='a';
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int a=abs(s[i]-prev);
        ans+=min(26-a,a);
        prev=s[i];
    }
    cout<<ans<<endl;
    return 0;
}