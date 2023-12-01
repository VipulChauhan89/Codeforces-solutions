#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,q,m;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>m;
        cout<<upper_bound(x.begin(),x.end(),m)-x.begin()<<endl;
    }
    return 0;
}