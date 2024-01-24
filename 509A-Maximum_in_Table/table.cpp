#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> dp(n,vector<int>(n,1));
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            int sum=0;
            for(int k=0;k<=j;k++)
            {
                sum+=dp[i-1][k];
            }
            dp[i][j]=sum;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
    return 0;
}