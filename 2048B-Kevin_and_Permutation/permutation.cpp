#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int count=1;
        cin>>n>>k;
        vector<int> A(n,-1);
        for(int i=k-1;i<n;i+=k)
        {
            A[i]=count++;
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]==-1)
            {
                A[i]=count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
