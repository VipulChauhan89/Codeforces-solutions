#include<iostream>
using namespace std;

int main()
{
    string s,s1="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='-')
        {
            if(s[i+1]=='-')
            {
                s1+='2';
            }
            else if(s[i+1]=='.')
            {
                s1+='1';
            }
            i++;
            continue;
        }
        else
        {
            s1+='0';
        }
    }
    cout<<s1<<endl;
    return 0;
}