#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i1=-1,j1=-1;
        vector<vector<char>> a(8,vector<char>(8));
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
                if((i1==-1 && j1==-1) && a[i][j]!='.')
                {
                    i1=i;
                    j1=j;
                }
            }
        }
        for(;i1<8;i1++)
        {
            if(a[i1][j1]=='.')
            {
                break;
            }
            cout<<a[i1][j1];
        }
        cout<<endl;

    }
    return 0;
}