#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=0;
        unordered_set<int> s;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s.find(a[i])!=s.end())
            {
                ans=i+1;
                break;
            }
            s.insert(a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}