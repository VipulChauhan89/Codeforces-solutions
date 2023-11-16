#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(int)floor(n/2)+((n%2==0)?-1:0)<<endl;
    }
    return 0;
}