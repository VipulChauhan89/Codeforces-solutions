#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,d;
    cin>>t;
    while(t--)
    {
        string ans="YES";
        cin>>n>>d;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>d)
            {
                ans="NO";
            }
        }
        sort(a.begin(),a.end());
        if((a[0]+a[1]<=d))
        {
            ans="YES";
        }
        cout<<ans<<endl;
    }
    return 0;
}