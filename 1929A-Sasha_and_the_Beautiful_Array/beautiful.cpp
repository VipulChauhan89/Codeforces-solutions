#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }  
        sort(v.begin(),v.end());
        cout<<*v.rbegin()-*v.begin()<<endl;
    }
    return 0;
}