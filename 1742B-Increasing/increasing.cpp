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
        string ans="YES";
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            if(a[i-1]==a[i])
            {
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}