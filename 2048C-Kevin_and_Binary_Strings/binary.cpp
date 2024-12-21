#include<iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s.size(),l1=1,r1=n,l2=1,r2=n,i=0;
        for(;i<n;i++)
        {
            if(s[i]=='0')
            {
                break;
            }
        }
        if(i==n)
        {
            i=n-1;
        }
        int k=i-1;
        for(int j=i;j<n && k>=0;j++,k--)
        {
            if(s[j]=='1')
            {
                break;
            }
        }
        l2=k+2;
        r2=k+1+n-i;
        cout<<l1<<" "<<r1<<" "<<l2<<" "<<r2<<endl;
    }
    return 0;
}
