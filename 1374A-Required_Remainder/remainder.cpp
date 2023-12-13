#include<iostream>
using namespace std;

int main()
{
    int t,x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        long long ans=n-n%x+y;
        cout<<((ans<=n)?ans:(n-n%x-(x-y)))<<endl;
    }
    return 0;
}