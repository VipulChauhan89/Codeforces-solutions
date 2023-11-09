#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    pair<int,int> mn={INT_MAX,0},mx={INT_MIN,0};
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(mn.first>=A[i])
        {
            mn.first=A[i];
            mn.second=i+1;
        }
        if(mx.first<A[i])
        {
            mx.first=A[i];
            mx.second=i+1;
        }
    }
    cout<<((mx.second<mn.second)?mx.second-1+n-mn.second:mx.second-1+n-mn.second-1)<<endl;
    return 0;
}