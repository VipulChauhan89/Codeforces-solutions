#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long n,m;
        cin>>n>>m;
        cout<<n*(m/2)<<endl;
    }
    return 0;
}
