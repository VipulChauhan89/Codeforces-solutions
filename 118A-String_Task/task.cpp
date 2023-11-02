#include<iostream>
using namespace std;

bool isVowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')?true:false;
}

int main()
{
    string s,ans="";
    cin>>s;
    for(auto i:s)
    {
        i=tolower(i);
        if(!isVowel(i))
        {
            ans+='.';
            ans+=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}