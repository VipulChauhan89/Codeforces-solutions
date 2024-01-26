#include<iostream>
using namespace std;

int main()
{
    string s1,s2,ans="NO";
    cin>>s1;
    for(int i=0;i<5;i++)
    {
        cin>>s2;
        if(s1[0]==s2[0] || s1[1]==s2[1])
        {
            ans="YES";
        }
    }
    cout<<ans<<endl;
    return 0;
}