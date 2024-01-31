#include<iostream>
#include<vector>
#include<unordered_map>
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
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            m[a[i]]=b[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<m[a[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
