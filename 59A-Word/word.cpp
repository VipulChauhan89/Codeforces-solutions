#include<iostream>
using namespace std;

int main()
{
    int lcount=0,ucount=0;
    string s,l="",u="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        lcount+=(islower(s[i]))?1:0;
        ucount+=(isupper(s[i]))?1:0;
        l+=tolower(s[i]);
        u+=toupper(s[i]);
    }
    (ucount<=lcount)?cout<<l<<endl:cout<<u<<endl;
    return 0;
}