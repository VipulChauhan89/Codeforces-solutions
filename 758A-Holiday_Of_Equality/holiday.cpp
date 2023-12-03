#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,S,mx=INT_MIN;
    unsigned long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mx=max(mx,a);
        sum+=a;
    }
    cout<<mx*n-sum<<endl;
    return 0;
}