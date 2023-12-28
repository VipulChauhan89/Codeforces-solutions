#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,j1;
    cin>>t;
    vector<vector<char>> v(3,vector<char>(3));
    while(t--)
    {
        int unvisited=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='?')
                {
                    j1=j;
                }
            }
        }
        for(int i=0;i<3;i++)
        {
            if(v[i][j1]!='?')
            {
                unvisited+=v[i][j1]-'A';
            }
        }
        if(unvisited==3)
        {
            cout<<'A'<<endl;
        }
        else if(unvisited==2)
        {
            cout<<'B'<<endl;
        }
        else
        {
            cout<<'C'<<endl;
        }
    }
    return 0;
}