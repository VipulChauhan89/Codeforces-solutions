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
        vector<int> arr(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            int xorEle=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    xorEle=xorEle^arr[j];
                }
            }
            if(xorEle==arr[i])
            {
                ans=xorEle;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}