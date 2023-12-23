#include<iostream>
#include<algorithm>
#include<vector>
#include <numeric>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0;i<k;i++)
        {
            if(b[i]>a[i])
            {
                sum-=a[i];
                sum+=b[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}