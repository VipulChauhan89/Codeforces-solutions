#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            a[i]=n-i;
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i-1]==i)
            {
                swap(a[i-1],a[i]);
            }
            cout<<a[i-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}