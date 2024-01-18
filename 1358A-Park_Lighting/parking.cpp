#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,m;
        cin>>n>>m;
        cout<<(long long)ceil((n*m)/2)<<endl;
    }
    return 0;
}