#include<iostream>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<((n==1)?0:(n==2)?m:2*m)<<endl;
    }
    return 0;
}