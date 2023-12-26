#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int mn=INT_MAX;
        cin>>n;
        vector<int> s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s.begin(),s.end());
        for(int i=1;i<n;i++)
        {
            mn=min(mn,s[i]-s[i-1]);
        }
        cout<<mn<<endl;
    }
    return 0;
}