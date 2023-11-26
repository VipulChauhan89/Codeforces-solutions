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
        int count=0;
        cin>>n;
        vector<int> A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A.begin(),A.end());
        for(int i=1;i<n;i++)
        {
            if(A[i]-A[i-1]<=1)
            {
                count++;
            }
        }
        cout<<((count==n-1)?"YES":"NO")<<endl;
    }
    return 0;
}