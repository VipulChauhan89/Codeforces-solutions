#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,b,mx=INT_MIN,people=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        people=people-a+b;
        mx=max(mx,people);
    }
    cout<<mx<<endl;
    return 0;
}