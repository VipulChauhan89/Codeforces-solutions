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
        int sum=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            sum+=a[i]-a[0];
        }
        cout<<sum<<endl;
    }
    return 0;
}