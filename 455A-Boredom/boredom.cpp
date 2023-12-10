#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    const int N=1000000;
    int n,mx=0,num;
    cin>>n;
    unordered_map<int,int> m;
    vector<long long> ans(N,0);
    for(int i=0;i<n;i++)
    {
        cin>>num;
        m[num]++;
    }
    for(int i=1;i<N;i++)
    {
        ans[i]=(long long)i*m[i];
        if(i-2>=0)
        {
            ans[i]+=ans[i-2];
        }
        if(ans[i-1]>ans[i])
        {
            ans[i]=ans[i-1];
        }
    }
    cout<<ans[N-1]<<endl;
    return 0;
}