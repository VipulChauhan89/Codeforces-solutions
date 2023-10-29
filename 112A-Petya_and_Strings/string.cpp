#include<iostream>
#include<cstring>
using namespace std;

string lower(string &s)
{
    for(int i=0;s[i]!='\0';i++)
    {
        s[i]=(char)tolower(s[i]);
    }
    return s;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    lower(s1);
    lower(s2);
    if(s1==s2)
    {
        cout<<0<<endl;
    }
    else if(s1<s2)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    return 0;
}