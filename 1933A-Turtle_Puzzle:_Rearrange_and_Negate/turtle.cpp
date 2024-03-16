#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=abs(arr[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}