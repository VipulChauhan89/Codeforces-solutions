#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int mn1=INT_MAX,mn2=INT_MAX;
        unsigned long long sum=0;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn1=min(mn1,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            mn2=min(mn2,b[i]);
        }
        for(int i=0;i<n;i++)
        {
            int m=min(a[i]-mn1,b[i]-mn2);
            a[i]-=m;
            b[i]-=m;
            sum+=m+(a[i]-mn1)+(b[i]-mn2);
        }
        cout<<sum<<endl;
    }
    return 0;
}