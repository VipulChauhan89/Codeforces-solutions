#include<iostream>
using namespace std;

int main()
{
    int n,m;
    char c;
    string ans="#Black&White";
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='C' || c=='M' || c=='Y')
            {
                ans="#Color";
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}