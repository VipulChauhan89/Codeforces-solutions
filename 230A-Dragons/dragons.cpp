#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int s,n,x,y,i;
    cin>>s>>n;
    vector<pair<int,int>> A(n);
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        A[i]={x,y};
    }
    sort(A.begin(),A.end());
    for(i=0;A[i].first<s && i<n;i++)
    {
        s+=A[i].second;
    }
    cout<<((i==n)?"YES":"NO")<<endl;
    return 0;
}