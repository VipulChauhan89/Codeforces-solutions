#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n>>l;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    r=2*max(A[0],l-A[n-1]);
    for(int i=0;i<n-1;i++)
    {
        r=max(r,A[i+1]-A[i]);
    }
    cout<<fixed<<setprecision(10)<<r/2.0<<endl;
    return 0;
}