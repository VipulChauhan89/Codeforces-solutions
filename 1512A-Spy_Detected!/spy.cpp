#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i=0;i<n;i++) 
        {
            cin>>A[i];
        }
        bool found=false;
        for(int i=1;i<n-1;i++) 
        {
            if(A[i]!=A[i-1] && A[i]!=A[i+1])
            {
                cout<<i+1<<endl;
                found=true;
            }
        }
        if(!found)
        {
            cout<<((A[0]!=A[1])?1:n)<<endl;
        }
    }
    return 0;
}