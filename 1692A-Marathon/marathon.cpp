#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,timur;
    cin>>t;
    vector<int> a(4);
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        timur=a[0];
        sort(a.begin(),a.end(),greater<int>());
        int ans=0;
        while(a[ans]!=timur)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
