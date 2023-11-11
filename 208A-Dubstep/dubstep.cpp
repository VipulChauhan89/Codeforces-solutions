#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s.substr(i,3)=="WUB") 
        {
            s.replace(i,3," ");
        }
    }
    size_t start=s.find_first_not_of(' '),end=s.find_last_not_of(' ');
    ans=s.substr(start,end-start+1);
    cout<<ans<<endl;
    return 0;
}