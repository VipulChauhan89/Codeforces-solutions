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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            cout<<((b[n-1]==a[i])?b[n-1]-b[n-2]:a[i]-b[n-1])<<" ";
        }
        cout<<endl;
    }
    return 0;
}