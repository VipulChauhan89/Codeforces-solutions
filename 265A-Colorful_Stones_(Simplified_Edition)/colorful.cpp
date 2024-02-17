#include<iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int i,j=0,k=1;
    for(int i=0;i<t.length();i++)
    {
        if(s[j]==t[i])
        {
            k++;
            j++;
        }
    }
    cout<<k<<endl;
    return 0;
}