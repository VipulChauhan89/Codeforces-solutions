#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long sum=0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i=0,j=n-1;
        while(i<j)
        {
            sum+=a[j--]-a[i++];
        }
        cout<<sum<<endl;
    }
    return 0;
}