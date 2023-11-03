#include<iostream>
using namespace std;

int main()
{
    string s,s1="hello";
    int j=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s1[j])
        {
            j++;
        }
    }
    (j==5)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}