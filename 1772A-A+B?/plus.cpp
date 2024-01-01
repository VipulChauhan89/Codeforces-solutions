#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        string num1="",num2="";
        int i=0;
        cin>>s;
        while(s[i]!='+')
        {
            num1+=s[i++];
        }
        i++;
        while(i<s.size())
        {
            num2+=s[i++];
        }
        cout<<stoi(num1)+stoi(num2)<<endl;
    }
    return 0;
}