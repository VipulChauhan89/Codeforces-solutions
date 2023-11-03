#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x,y,z;
    cin>>n;
    vector<int> ans(3);
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        ans[0]+=x;
        ans[1]+=y;
        ans[3]+=z;
    }
    (ans[0]==0 && ans[1]==0 && ans[2]==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}