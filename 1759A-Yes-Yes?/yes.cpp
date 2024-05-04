#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str="Yes",mes="YES";
        cin>>s;
        if(str.find(s[0])==-1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<s.length()-1;i++)
        {
            if((s[0]!='Y' && s[0]!='e' && s[0]!='s') || (s[i]=='Y' && s[i+1]!='e') || (s[i]=='e' && s[i+1]!='s') || (s[i]=='s' && s[i+1]!='Y'))
            {
                mes="NO";
                break;
            }
        }
        cout<<mes<<endl;
    }
    return 0;
}