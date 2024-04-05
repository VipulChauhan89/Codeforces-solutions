#include<iostream>
using namespace std;

int compare(string s)
{
    if(s=="M")
    {
        return 0;
    }
    long long count=1;
    for(auto i:s)
    {
        if(i=='X')
        {
            count++;
        }
    }
    if(s[s.size()-1]=='S')
    {
        count*=-1;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2)
        {
            cout<<"="<<endl;
        }
        else if(compare(s1)<compare(s2))
        {
            cout<<"<"<<endl;
        }
        else 
        {
            cout<<">"<<endl;
        }
    }
    return 0;
}