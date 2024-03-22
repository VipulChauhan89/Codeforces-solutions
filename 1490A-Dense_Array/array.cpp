#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++) 
        {
            float mn=min(a[i],a[i+1]),mx=max(a[i],a[i+1]);
            while(mx/mn>2.0)
            {
                mx=ceil(mx/2);
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}