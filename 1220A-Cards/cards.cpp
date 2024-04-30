#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,i;
    string s;
    cin>>n>>s;
    vector<int> one(n,-1),zero(n,-1);
    for(i=0;i<n;i++)
    {
        if(s[i]=='n')
        {
            one[i]=1;
        }
        if(s[i]=='z')
        {
            zero[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(one[i]==1)
        {
            cout<<one[i]<<" ";
        }
    }
    for(i=0;i<n;i++)
    {
        if(zero[i]==0)
        {
            cout<<zero[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}