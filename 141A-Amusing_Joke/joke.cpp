#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    string s1,s2,s3,ans="YES";
    vector<int> v1(26,0),v2(26,0),v3(26,0);
    cin>>s1>>s2>>s3;
    for(int i=0;i<s1.length();i++)
    {
        v1[s1[i]-'A']++;
    }
    for(int i=0;i<s2.length();i++)
    {
        v2[s2[i]-'A']++;
    }
    for(int i=0;i<s3.length();i++)
    {
        v3[s3[i]-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(v3[i]!=v2[i]+v1[i])
        {
            ans="NO";
            break;
        }
    }
    cout<<ans<<endl;
}