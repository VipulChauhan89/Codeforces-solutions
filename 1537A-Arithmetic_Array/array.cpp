#include<iostream>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            sum+=num;
        }
        cout<<((sum>=n)?sum-n:1)<<endl;
    }
    return 0;
}