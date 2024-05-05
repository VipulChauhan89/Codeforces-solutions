#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        long mxa(-1),mxb(-1);
        cin>>n;
        vector<long> a(n),b(n); 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int p=0;p<n;p++)
        {
            long x=(a[p]<b[p])?a[p]:b[p];
            long y=(a[p]>b[p])?a[p]:b[p];
            mxa=(mxa>x)?mxa:x;
            mxb=(mxb>y)?mxb:y;
        }
        cout<<mxa*mxb<<endl;
    }
    return 0;
}