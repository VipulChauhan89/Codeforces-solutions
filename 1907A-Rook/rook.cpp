#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<8;i++)
        {
            if(s[0]!='a'+i)
            {
                cout<<char('a'+i)<<s[1]<<endl;
            }
        }
        for(int i=1;i<9;i++)
        {
            if(s[1]-'0'!=i)
            {
                cout<<s[0]<<i<<endl;
            }
        }
    }
    return 0;
}