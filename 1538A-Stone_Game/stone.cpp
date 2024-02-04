#include<iostream>
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
            cin>>a[i];
        }
        pair<int,int> mx={a[0],0},mn={a[0],0};
        for(int i=1;i<n;i++)
        {
            if(mx.first<a[i])
            {
                mx={a[i],i};
            }
            else if(mn.first>a[i])
            {
                mn={a[i],i};
            }
        }
        int mini=min(mn.second,mx.second),maxi=max(mn.second,mx.second);
        cout<<min(maxi+1,min(mini+n+1-maxi,n-mini))<<endl;
    }
    return 0;
}