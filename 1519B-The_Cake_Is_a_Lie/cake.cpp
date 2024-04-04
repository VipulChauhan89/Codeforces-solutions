#include<iostream>
using namespace std;

int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        cout<<((k+1==(n*m))?"YES":"NO")<<endl;
    }
    return 0;
}