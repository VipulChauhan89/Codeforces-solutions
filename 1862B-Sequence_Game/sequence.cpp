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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1])
            {
                ans.push_back(arr[i]);
            }
            else
            {
                ans.push_back(1);
                ans.push_back(arr[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}