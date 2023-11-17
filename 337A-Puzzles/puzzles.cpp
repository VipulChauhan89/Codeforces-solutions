#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,mn=INT_MAX;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=n-1;i<m;i++)
    {
        mn=min(mn,a[i]-a[i-(n-1)]);
    }
    cout<<mn<<endl;
    return 0;
}