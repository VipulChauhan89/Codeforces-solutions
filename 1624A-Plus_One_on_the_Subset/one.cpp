#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        int mn=INT_MAX,mx=INT_MIN;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            mn=min(num,mn);
            mx=max(num,mx);
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}