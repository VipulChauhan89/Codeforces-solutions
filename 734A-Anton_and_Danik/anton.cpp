#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<char,int> m;
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    if(m['A']==m['D'])
    {
        cout<<"Friendship"<<endl;
    }
    else if(m['A']>m['D'])
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
    return 0;
}