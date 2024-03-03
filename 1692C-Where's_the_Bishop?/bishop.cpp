#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<vector<char>> a(8,vector<char>(8));
    while(t--)
    {
        bool ans=false;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=7;i++)
        {
            for(int j=1;j<=7;j++)
            {
                if(a[i][j]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#') 
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    ans=true;
                    break;
                }
            }
            if(ans==true)
            {
                break;
            }
        } 
    }
    return 0;
}