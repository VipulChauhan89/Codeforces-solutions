#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=0,h=n-1;
        while(l<h)
        {
            cout<<a[l++]<<" "<<a[h--]<<" ";
        }
        if(l==h)
        {
            cout<<a[h];
        }
        cout<<endl;
    }
    return 0;
}