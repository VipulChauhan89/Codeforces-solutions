#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool flag=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"#";
            }
        }
        else if(flag)
        {
            flag=0;
            for(int j=0;j<m-1;j++)
            {
                cout<<".";
            }
            cout<<"#";
        }
        else
        {
            flag=1;
            cout<<"#";
            for(int j=0;j<m-1;j++)
            {
                cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}