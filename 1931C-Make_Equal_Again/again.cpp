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
        int prev=1,next=1,ans=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]==a[i+1])
            {
                next++;
            }
            else
            {
                break;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(a[i-1]==a[i])
            {
                prev++;
            }
            else
            {
                break;
            }
        }
        if(a[0]==a[n-1])
        {
            ans=n-(prev+next);
        }
        else
        {
            ans=n-max(prev,next);
        }
        cout<<((prev==n)?0:ans)<<endl;
    }
    return 0;
}
