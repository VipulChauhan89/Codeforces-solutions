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
        int currentSum=0,prevSum=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                currentSum++;
            }
            else
            {
                prevSum=max(currentSum,prevSum);
                currentSum=0;
            }
        }
        cout<<max(prevSum,currentSum)<<endl;
    }
    return 0;
}