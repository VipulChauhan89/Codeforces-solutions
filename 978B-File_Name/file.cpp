#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    string s;
    cin>>n>>s;
    for(int i=2;i<n;i++)
    {
        if(s[i-2]=='x' && s[i-1]=='x' && s[i]=='x')
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}