#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int i1,j1;
    vector<vector<int> > A(5,vector<int>(5));
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
                i1=i;
                j1=j;
            }
        }
    }
    cout<<abs(2-i1)+abs(2-j1)<<endl;
    return 0;
}