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
        string ans="SQUARE";
        cin>>n;
        vector<string> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(count(a[i].begin(),a[i].end(),'1')==1)
            {
                ans="TRIANGLE";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}